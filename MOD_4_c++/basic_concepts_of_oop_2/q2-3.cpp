// Define a class to represent a bank account. Include the following members:

// Data Member:
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account
// Member Functions
// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositor_name;
    long account_number;
    char account_type;
    float balance;

public:
    void assign_values(const string& name, long acc_number, char acc_type, float initial_balance) {
        depositor_name = name;
        account_number = acc_number;
        account_type = acc_type;
        balance = initial_balance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount deposited successfully. New balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds. Withdrawal unsuccessful." << endl;
        }
    }

    void display() {
        cout << "Depositor Name: " << depositor_name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;

    account.assign_values("John Doe", 123456789, 'S', 1000.0);

    cout << "Initial Account Details:" << endl;
    account.display();

    account.deposit(500.0);

    account.withdraw(200.0);

    cout << "Updated Account Details:" << endl;
    account.display();

    return 0;
}
