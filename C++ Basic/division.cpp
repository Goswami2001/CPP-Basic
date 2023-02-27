//Write a program in C++ to divide two numbers and print on the screen
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the dividend : ";
    cin>>num1;
    cout<<"Enter the divisor : ";
    cin>>num2;
    cout<<"Quotient of "<<num1<<" and "<<num2<<" is : "<<(num1/num2)<<endl;
    return 0;
}