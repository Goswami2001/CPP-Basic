// Write a program in C++ to convert temperature in Celsius to Kelvin
#include<iostream>
using namespace std;
int main(){
    float celcius;
    cout<<"Enter the temperature in celcius : ";
    cin>>celcius;
    float kelvin = (celcius  +273.15);
    cout<<"Temperature in kelvin will be : "<<kelvin<<endl;
    return 0;
}