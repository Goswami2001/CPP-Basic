//Write a c++ program to calculate cube of a number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Cube of "<<num<<" will be : "<<pow(num,3)<<endl;
    return 0;
}