//Write a program to conver number of days into it's corresponding week month and year
#include<iostream>
using namespace std;
int main(){
    int days,weeks,months,years;
    cout<<"Enter the total no. of days : ";
    cin>>days;
    months = (days/30);
    weeks = (days / 7);
    years = (days / 365);
    cout<<"Total Year : "<<years<<" Total Month : "<<months<<" Total Weeks : "<<weeks<<endl;
    return 0;
}