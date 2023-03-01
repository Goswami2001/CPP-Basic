//Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<iostream>
using namespace std;
int main(){
    int num,sum = 0,total = 0;
    cout<<"Enter the maximum range : ";
    cin>>num;
    for(int i = 1;i <= num;i++){
        sum = sum + i;
        total = sum + total;
    }
    cout<<"Sum of the following series will be : "<<total<<endl;
    return 0;
}