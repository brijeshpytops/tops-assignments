// Write a C++ program to implement a class called Bank Account that has
// private member variables for account number and balance. Include
// member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;

class BankAccount {
private:
    int acc_no;
    float balance;

public:
    BankAccount(int a_c, float init_balance) : acc_no(a_c), balance(init_balance) {}

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount. Please enter a positive value." << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
        } else {
            cout << "Insufficient funds. Withdrawal unsuccessful." << endl;
        }
    }

    float get_balance() {
        return balance;
    }
};

int main() {
    
    BankAccount a1(123456789, 1000.0);

    a1.deposit(500.0);
    a1.withdraw(200.0);
    a1.withdraw(800.0);  
    cout << "Final Account Balance: " << a1.get_balance() << endl;

    return 0;
}
