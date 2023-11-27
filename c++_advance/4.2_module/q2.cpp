// Define a class to represent a bank account. Include the following members:
// 1. Data Member:
// -Name of the depositor
// -Account Number
// -Type of Account
// -Balance amount in the account
// 2. Member Functions
// -To assign values
// -To deposited an amount
// -To withdraw an amount after checking balance
// -To display name and balance 

#include<iostream>
#include<string>
using namespace std;

class Bank{
private:
    string usrName,accType;
    int accNumber;
    float accBalance=0;

public:
    Bank(string usrNm,int accNum,string accTyp){
        usrName = usrNm;
        accNumber = accNum;
        accType = accTyp;
    }

public:
    void display(){
        cout<<"\nAccount Username: "<<usrName<<"\nAccount Balance: "<<accBalance<<" Rupees"<<endl;
    }

public:
    void deposite(float n){
        if(n>0){
            accBalance+=n;
            cout<<"\nSuccessfully Deposited "<<n<<" Rupees"<<"\nAccount Balance: "<<accBalance<<endl;
        }else{
            cout<<"\nNegative Value is Not Posible to Deposite"<<"\nAccount Balance: "<<accBalance<<endl;
        }
    }

public:
    void withdraw(float n){
        if(n>accBalance){
            accBalance+=n;
            cout<<"\nNot Enough Balance"<<"\nAccount Balance: "<<accBalance<<endl;
        }else if(n>0){
            accBalance-=n;
            cout<<"\nSuccessfully withdraw "<<n<<" Rupees"<<"\nAccount Balance: "<<accBalance<<endl;
        }else{
            cout<<"\nEnter Valid Amount to Withdraw"<<endl;
        }
    }
};


int main(){
    Bank usr1("Bot",1334,"Saving");
    usr1.deposite(1000);
    usr1.withdraw(500);
    usr1.display();
    return 0;
}