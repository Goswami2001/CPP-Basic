//Write a program in C++ to convert temperature in Kelvin to Fahrenheit
#include<iostream>
using namespace std;
int main(){

    float kelvin;
    cout<<"Enter the temperature in kelvin : ";
    cin>>kelvin;
    //Formula for calculating temparature in fahrenheit from kelvin
    float fahrenheit = ((kelvin-273.15)*(9.0/5))+32;
    cout<<"Temperature in fahrenheit will be : "<<fahrenheit<<endl;
    return 0;
}