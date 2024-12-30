// 2. Define a class to represent a bank account. Include the following members:

// 3.
// Data Member:
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account
//

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int account_number;
    double balance;
    string name, account_type;

public:
    void get_data()
    {
        cout << "Enter Name of Depositor: ";
        cin.ignore(); // Clear input buffer
        getline(cin, name);
        cout << "Enter Account Number: ";
        cin >> account_number;
        cout << "Enter Type of Account: ";
        cin >> account_type;
        cout << "Enter Initial Balance: ";
        cin >> balance;

        if (balance < 0)
        {
            cout << "Balance cannot be negative. Setting to 0." << endl;
            balance = 0;
        }
    }

    void deposit()
    {
        double deposit_amount;
        cout << "Current Balance: " << balance << endl;
        cout << "Enter Amount to Deposit: ";
        cin >> deposit_amount;

        if (deposit_amount > 0)
        {
            balance += deposit_amount;
            cout << "Amount Deposited Successfully!" << endl;
        }
        else
        {
            cout << "Invalid Deposit Amount!" << endl;
        }
    }

    void withdraw()
    {
        double withdraw_amount;
        cout << "Current Balance: " << balance << endl;
        cout << "Enter Amount to Withdraw: ";
        cin >> withdraw_amount;

        if (withdraw_amount > 0 && withdraw_amount <= balance)
        {
            balance -= withdraw_amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        }
        else if (withdraw_amount > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            cout << "Invalid Withdrawal Amount!" << endl;
        }
    }

    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name of Depositor: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Type of Account: " << account_type << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.get_data();
    account.deposit();
    account.withdraw();
    account.display();

    return 0;
}
