//Write a C++ program to enter month number and print number of days in month.
#include<iostream>
using namespace std;
int main(){
    int num,month;
    cout<<"Enter the no. of month : ";
    cin>>num;
    month = (num % 12);
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout<<"Month contains 31 days ";
    }
    else if(num == 2){
        cout<<"Month contains 28 days ";
    }
    else{
        cout<<"Month contains 30 days ";
    }
    return 0;
}