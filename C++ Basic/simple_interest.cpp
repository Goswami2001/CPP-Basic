//Write a program in C++ to enter P, T, R and calculate Simple Interest
#include<iostream>
using namespace std;
int main(){
    int principle,time,interest_rate;
    cout<<"Enter the amount of principle : ";
    cin>>principle;
    cout<<"Enter the amount of time : ";
    cin>>time;
    cout<<"Enter the amount of rate of interest : ";
    cin>>interest_rate;
    //Formula for calculating simple interest
    int simple_interest = ((principle*time*interest_rate)/100) ;
    cout<<"Simple interest will be : "<<simple_interest<<endl;
    return 0;
}