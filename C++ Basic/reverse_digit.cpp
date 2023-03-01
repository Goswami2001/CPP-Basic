//Write a program to reverse the digit of a number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int digit = 0;
    while(num > 0){
        digit = (digit *10) + (num % 10);
        num = num / 10;
    }
    cout<<"After reversing : "<<digit<<endl;
    return 0;
}