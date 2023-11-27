// Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance) 
#include<iostream>
using namespace std;
class cricketer{
protected:
    string cName,cTeam,cRole;
    int cAge;

public:
    cricketer(string name,int age,string team,string role){
        cName = name;
        cTeam = team;
        cAge = age;
        cRole = role; 
    }
};
class batsman : public cricketer{

private:
    int totalRun=0, maxRun=0, run, matchPlayed=0;
    float avgRun;

public:
    batsman(string name,int age,string team,string role):cricketer(name,age,team,role){}
public:    
    void input_run(int rn){
        run = rn;
        totalRun +=run;
        matchPlayed+=1;
        if(run>maxRun){
            maxRun = run;
        }
        avgRun = totalRun/matchPlayed;
    }

public:
    void avg(){  
        cout<<"\nAverage Run: "<<avgRun<<endl;
    }

public:
    void display(){
        cout<<"\nBatsman Name: "<<cName<<endl;
        cout<<"Batsman Age: "<<cAge<<endl;
        cout<<"Batsman Team: "<<cTeam<<endl;
        cout<<"Batsman Role: "<<cRole<<endl<<endl;
        cout<<"Batsman Total Runs: "<<totalRun<<endl;
        cout<<"Batsman Max Runs: "<<maxRun<<endl;
        cout<<"Batsman Average Runs: "<<avgRun<<endl;
    }
};

int main(){
    batsman b1("Dhoni",36,"India","All-Rounder");
    b1.input_run(54);
    b1.input_run(80);
    b1.input_run(54);
    b1.display();
    b1.avg();
    return 0;
}