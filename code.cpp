#include <iostream>
#include <string>

using namespace std;

int calculatebonus(int year);
double clacualtecommission(double monthSale);

int main() {
    string name;
    int year;
    double salary,bonus,monthSale,monthllySalary, commission;
    cout <<"Enter your name to the system.\n";
    getline(cin,name);
    cout<<"How many year you have work in this store.\n";
    cin>>year;
    cout <<"Please Enter your base salary for the year.\n";
    cin>>salary;
    cout<<"Enter the month sale you make monthlly.\n";
    cin>>monthSale;

    bonus=calculatebonus(year);
    commission=clacualtecommission(monthSale)*12;
    monthllySalary=(bonus+commission+salary)/12;

    cout <<"Your name: "<<name<<endl;
    cout<<"The amount of monthlly salary is: $"<<monthllySalary<<" each month\n";
    
}

int calculatebonus(int year){
    double bonus;
    if(year>=0&&year<=5){
        bonus=240;
    }else if(year>5)
    bonus=480;
    return bonus;
}
double clacualtecommission(double monthSale){
    double percentage;
    if (monthSale>=5000&&monthSale<10000){
        percentage=monthSale*0.03;
    }else if(monthSale>=10000){
        percentage=monthSale*0.05;
    }
    return percentage;
}
