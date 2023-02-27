//Write a program in C++ to enter P, T, R and calculate Compound Interest
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float principle,time,interest_rate;
    cout<<"Enter the amount of principle : ";
    cin>>principle;
    cout<<"Enter the amount of time : ";
    cin>>time;
    cout<<"Enter the amount of rate of interest : ";
    cin>>interest_rate;
    float comp_interest = principle*pow((1+interest_rate/100),time)-principle;
    cout<<"Compound interest will be : "<<comp_interest<<endl;
    return 0;
}