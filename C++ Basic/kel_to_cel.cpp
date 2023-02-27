// Write a program in C++ to convert temperature in Kelvin to Celsius.
#include<iostream>
using namespace std;
int main(){
    float kelvin;
    cout<<"Enter the temperature in kelvin : ";
    cin>>kelvin;
    float celcius = (kelvin + 273.15);
    cout<<"Temperature in celcius will be : "<<celcius<<endl;
    return 0;
}