//Write a program in C++ to calculate product of digits of any number
#include<iostream>
using namespace std;
int main(){
    int num,i,product = 1;
    cout<<"Enter a number : ";
    cin>>num;
    while(num > 0){
        i = num % 10;
        product *= i;
        num = num /10;
    }
    cout<<"Product of digits will be : "<<product<<endl;
    return 0;
}