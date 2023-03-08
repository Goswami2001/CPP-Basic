//Write a c++ program to convert Rupees into Dollar
#include<iostream>
using namespace std;
int main(){
    float Rupees;
    cout<<"Enter amount of money in Rupees : ";
    cin>>Rupees;
    float Dollar = (Rupees / 81.71);
    cout<<"In dollar it will be : "<<Dollar<<endl;
    return 0;
}