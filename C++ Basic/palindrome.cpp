//Write a C++ program to check whether a number is palindrome or not
#include<iostream>
using namespace std;
int main(){
    int num,i,equal;
    cout<<"Enter a number : ";
    cin>>num;
    equal = num;
    for(i = 0;num > 0; num = (num / 10)){
        i = i * 10;
        i = i + (num%10);
    }
    if(equal == i){
        cout<<i<<" is a palindrome number";
    }
    else{
        cout<<i<<" is not a palidrome number";
    }
    return 0; 
}