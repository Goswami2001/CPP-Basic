//Write a program in C++ to find the sum of first 10 natural numbers
#include<iostream>
using namespace std;
int main(){
    int num,sum = 0;
    for(int i = 1;i <= 10;i++){
        cout<<i<<" ";
        sum += i;
    }cout<<endl;
    cout<<"Sum of first 10 natural number : "<<sum<<endl;
    return 0;
}