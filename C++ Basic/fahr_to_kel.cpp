//Write a program in C++ to convert temperature in Fahrenheit to Kelvin
#include<iostream>
using namespace std;
int main(){
    float fahr;
    cout<<"Enter temperature in fahreneheit : ";
    cin>>fahr;
    float kelvin = ((fahr-32)*(5.0/9))+273.15;
    cout<<"Temperature in kelvin will be : "<<kelvin<<endl;
    return 0;
}