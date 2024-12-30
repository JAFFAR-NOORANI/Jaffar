// 1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)


#include <iostream>
#include <string>

using namespace std;


class Cricketer {
protected:
    string name;
    int Played_match;

public:
    
    void inputCricketerData() {
        cout << "Enter Cricketer's Name: ";
        cin >> name;
        cout << "Enter How Many Matches He Played : ";
        cin >> Played_match;
    }
};

// Derived class
class Batsman : public Cricketer {
private:
    int Total_Runs;
    float Average_Runs;
    int Best_Performance;

public:
   
    void inputData() {
        inputCricketerData(); 
        cout << "Enter total runs scored: ";
        cin >> Total_Runs;
        cout << "Enter best performance (highest runs in a match): ";
        cin >> Best_Performance;
        calculateAverageRuns(); 
    }

    
    void calculateAverageRuns() {
        if (Played_match > 0) {
            Average_Runs = static_cast<float>(Total_Runs) / Played_match;
        } else {
            Average_Runs = 0.0;
        }
    }

  
    void displayData() {
        cout << "\nBatsman Information :\n";
        cout << "Name : " << name << endl;
        cout << "Matches Played : " << Played_match << endl;
        cout << "Total Runs : " << Total_Runs << endl;
        cout << "Average Runs : " << Average_Runs << endl;
        cout << "Best Performance : " << Best_Performance << " runs" << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.displayData(); 

    return 0;
}