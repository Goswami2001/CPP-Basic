//Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<iostream>
using namespace std;
int main(){
    int num,sum = 0;
    cout<<"Enter the maximum range of the number : ";
    cin>>num;
    for(int i = 1;i <= num;i++){
        sum = sum + (i * i);
    }
    cout<<"Sum of the given series will be : "<<sum<<endl;
    return 0;
}