//Write a program in C++ to display n terms of natural number and their sum
#include<iostream>
using namespace std;
int main(){
    int num,sum = 0;
    cout<<"Enter the number(n) : ";
    cin>>num;
    for(int i = 1;i <= num;i++){
        cout<<i<<" ";
        sum += i;
    }cout<<endl;
    cout<<"Sum will be : "<<sum<<endl;
    return 0;
}