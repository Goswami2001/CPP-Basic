//Write a program in C++ to check whether a number is positive, negative or zero.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num>0){
        cout<<"The entered number is positive";
    }
    else if(num<0){
        cout<<"The entered number is negative";
    }
    else{
        cout<<"The number is zero";
    }
    return 0;
}