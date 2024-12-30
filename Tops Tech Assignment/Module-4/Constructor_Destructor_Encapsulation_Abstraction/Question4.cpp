// 4. Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.


#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    void createAccount(int accNum, double initialBalance)
    {
        accountNumber = accNum;
        balance = initialBalance;
        cout << "Account created successfully!\n";
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful! Current Balance: $" << balance << endl;
        }
        else
        {
            cout << "Deposit amount must be positive.\n";
        }
    }


    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient funds! Current Balance: $" << balance << endl;
        }
        else if (amount <= 0)
        {
            cout << "Withdrawal amount must be positive.\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful! Current Balance: $" << balance << endl;
        }
    }

    void displayAccountDetails()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.createAccount(12345, 500.00);

    account.deposit(200.00);

    account.withdraw(100.00);

    account.withdraw(700.00);

    account.displayAccountDetails();

    return 0;
}
