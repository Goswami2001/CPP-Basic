//Write a program in C++ to compute the total and average of four numbers
#include<iostream>
using namespace std;
int main(){
    float num1,num2,num3,num4;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter the third number : ";
    cin>>num3;
    cout<<"Enter the fourth number : ";
    cin>>num4;
    float total = (num1+num2+num3+num4);
    float average = (total) /4;
    cout<<"Total of the four number  : "<<total<<endl;
    cout<<"Avergae of the four number : "<<average<<endl;
    return 0;
}