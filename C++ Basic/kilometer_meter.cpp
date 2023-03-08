//Write a program to calculate kilometer in meter
#include<iostream>
using namespace std;
int main(){
    double kilometer,meter;
    cout<<"Enter the length in kilometer : ";
    cin>> kilometer;
    meter = (kilometer * 1000);
    cout<<"In meter the length will be : "<<meter<<" meter"<<endl;
    return 0;
}