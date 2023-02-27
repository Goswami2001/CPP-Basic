//Write a C++ program to read an integer n and prints the factorial of n in recursive approach
#include<iostream>
using namespace std;

int factorial(int num){
    //Base case
    if( num == 0 || num == 1){
        return 1;
    }
    return num*factorial(num-1);
}

int main(){
    int num;
    cout<<"Enter the maximum number : ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is : "<<factorial(num)<<endl;
    return 0;
}