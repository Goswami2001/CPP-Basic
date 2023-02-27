//Write a C++ program to read an integer n and prints the factorial of n in ittrative approach
#include<iostream>
using namespace std;
int main(){
    int max;
    cout<<"Enter the maximum number : ";
    cin>>max;
    int factorial = 1;
    for(int i=2;i<=max;i++){
        factorial*=i;
    }
    cout<<"Factorial of "<<max<<" is : "<<factorial<<endl;
    return 0;
}