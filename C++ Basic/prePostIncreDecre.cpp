//Write a program in C++ to display the operation of pre and post increment and decrement.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"The number is : "<<num<<endl;
    num++;
    cout<<"Post-increment of the number will be : "<<(num)<<endl;
    ++num;
    cout<<"Pre-increment of the number will be : "<<(num)<<endl;
    num--;
    cout<<"Post-decrement of the number will be : "<<(num)<<endl;
    --num;
    cout<<"Pre-decrement of the number will be : "<<(num)<<endl;
}
