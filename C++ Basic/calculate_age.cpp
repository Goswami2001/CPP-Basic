// Write a c++ program to calculate proper age of peoples
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int current_year,current_month,current_day,birth_year,birth_month,birth_day;
    cout<<"Enter current year : ";
    cin>>current_year;
    cout<<"Enter current month : ";
    cin>>current_month;
    cout<<"Enter current date : ";
    cin>>current_day;
    cout<<"Enter the Birthday year : ";
    cin>>birth_year;
    cout<<"Enter the Birthday month : ";
    cin>>birth_month;
    cout<<"Enter the Birthday day : ";
    cin>>birth_day;
    cout<<"Your age is : "<<(abs(current_year - birth_year))<<" Year "<<(abs(current_month - birth_month))<<" Month "<<(abs(current_day - birth_day))<<" Day";
    return 0;
}