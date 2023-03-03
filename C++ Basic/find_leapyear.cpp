//Write a C++ program to check leap year using conditional Operator.
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    if(year %4 == 0 && year % 400 == 0 || year % 100 != 0){
        cout<<"It's a leap-year";
    }
    else{
        cout<<"It's not a leap-year";
    }
}