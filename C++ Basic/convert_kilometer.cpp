//Write a program to convert kilometer into meter and miles
#include<iostream>
using namespace std;
int main(){
    double kilo,meter,miles;
    cout<<"Enter the distance in kilometer : ";
    cin>>kilo;
    meter = (kilo * 1000);
    miles = (kilo * 0.6213);
    cout<<"Distance in meter will be : "<<meter<<" meter"<<endl;
    cout<<"Distance in meter will be : "<<miles<<" miles"<<endl;
    return 0;
}