//Write a program in C++ to compute quotient and remainder
#include<iostream>
using namespace std;
int main(){
    int dividend,divisor;
    cout<<"Enter the dividend : ";
    cin>>dividend;
    cout<<"Enter the divisor : ";
    cin>>divisor;
    int division = (dividend / divisor);
    int remainder = (dividend % divisor);
    cout<<"Division will be : "<<division<<endl;
    cout<<"Remainder will be : "<<remainder<<endl;
    return 0;
}