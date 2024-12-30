#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

class FoodItem {
public:
    int id;
    string name;
    double price;

    FoodItem(int id, string name, double price) : id(id), name(name), price(price) {}
};

class Order {
private:
    vector<pair<FoodItem, int>> items; 
    double totalBill;

public:
    Order() : totalBill(0.0) {}

   
    void addItem(const FoodItem& item, int quantity) {
        items.push_back(make_pair(item, quantity));
        totalBill += item.price * quantity;
    }

    
    void displayBill() const {
        cout << "\n------ Your Bill ------\n";
        cout << setw(10) << "Item" << setw(10) << "Qty" << setw(10) << "Price" << setw(10) << "Total\n";
        cout << "-----------------------\n";
        for (const auto& entry : items) {
            cout << setw(10) << entry.first.name
                 << setw(10) << entry.second
                 << setw(10) << entry.first.price
                 << setw(10) << entry.first.price * entry.second << "\n";
        }
        cout << "-----------------------\n";
        cout << "Total Bill: $" << fixed << setprecision(2) << totalBill << "\n";
    }
};


class Menu {
private:
    vector<FoodItem> foodItems;

public:
    Menu() {
        foodItems.push_back(FoodItem(1, "Pizza", 8.99));
        foodItems.push_back(FoodItem(2, "Burger", 5.49));
        foodItems.push_back(FoodItem(3, "Pasta", 7.99));
        foodItems.push_back(FoodItem(4, "Salad", 4.99));
        foodItems.push_back(FoodItem(5, "Soda", 1.99));
    }

    void displayMenu() const {
        cout << "\n------ Food Menu ------\n";
        for (const auto& item : foodItems) {
            cout << item.id << ". " << item.name << " - $" << fixed << setprecision(2) << item.price << "\n";
        }
        cout << "-----------------------\n";
    }

    FoodItem* getFoodItem(int id) {
        for (auto& item : foodItems) {
            if (item.id == id) return &item;
        }
        return nullptr;
    }
};


int main() {
    string customerName;
    Menu menu;
    Order order;

    cout << "Welcome to the Food Ordering System!\n";
    cout << "Enter your name: ";
    getline(cin, customerName);

    bool continueOrdering = true;

    while (continueOrdering) {
        menu.displayMenu();

        int choice, quantity;
        cout << "Enter the number of the food item you'd like to order: ";
        cin >> choice;

        FoodItem* selectedFood = menu.getFoodItem(choice);
        if (selectedFood == nullptr) {
            cout << "Invalid choice. Please select a valid food item.\n";
            continue;
        }

        cout << "Enter the quantity: ";
        cin >> quantity;

        order.addItem(*selectedFood, quantity);

        char continueChoice;
        cout << "Do you want to continue ordering? (y/n): ";
        cin >> continueChoice;

        if (continueChoice == 'n' || continueChoice == 'N') {
            continueOrdering = false;
        }
    }

    order.displayBill();

    cout << "Thank you for ordering with us, " << customerName << "!\n";
    return 0;
}
