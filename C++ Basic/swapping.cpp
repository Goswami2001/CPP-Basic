//Write a program in C++ to swap two numbers using 3rd variable....
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"After swapping first number will be : "<<num1<<endl;
    cout<<"After swapping second number will be : "<<num2;
}