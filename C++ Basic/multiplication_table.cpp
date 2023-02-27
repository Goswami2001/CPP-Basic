// Write a program in C++ that takes a number as input and prints its multiplication table upto 10
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    for(int i=1;i<11;i++){
        cout<<num <<" * "<< i<<" = "<<(num*i);
        cout<<endl;
    }
    return 0;
}