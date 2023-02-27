//Write a program in C++ to convert temperature in Fahrenheit to Celsius
#include<iostream>
using namespace std;
int main(){
    float fahrenheit;
    cout<<"Enter the temperature in celcius : ";
    cin>>fahrenheit;
    //Formula for calculating temperature into fahrenheit from celcius
    float celcius = ((fahrenheit -32)*5)/9;
    cout<<"Temperature in farhenheit will be : "<<celcius<<endl;
    return 0;
}