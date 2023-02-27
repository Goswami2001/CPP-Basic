//Swap two numbers without using any third variable
#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter the first number : ";
    cin>>num1;
    int num2;
    cout<<"Enter second number : ";
    cin>>num2;
    swap(num1,num2);
    cout<<"First number : "<<num1<<endl;
    cout<<"Second number : "<<num2<<endl;
    return 0;
}