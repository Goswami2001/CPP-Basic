//Write a c++ program to convert kilogram into pound and tonne
#include<iostream>
using namespace std;
int main(){
    double kilo,pound,tonne;
    cout<<"Enter the weight in kilogram : ";
    cin>>kilo;
    pound = (kilo * 2.20);
    tonne = (kilo * 0.001);
    cout<<"Weight in pond will be : "<<pound<<" pound"<<endl;
    cout<<"Weight in pond will be : "<<tonne<<" tonne"<<endl;
    return 0;
}