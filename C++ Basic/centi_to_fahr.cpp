//Write a program in C++ to convert temperature in Celsius to Fahrenheit
#include<iostream>
using namespace std;
int main(){
    int cel;
    cout<<"Enter the temperature in celcius : ";
    cin>>cel;
    //Formula for calculating temperature into fahrenheit from celcius
    float fahrenheit = (cel * 1.8);
    cout<<"Temperature in farhenheit will be : "<<fahrenheit<<endl;
    return 0;
}