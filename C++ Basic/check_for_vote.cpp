//Write a C++ program to detrermine a candidate’s age is eligible for casting the vote or not.
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age > 18){
        cout<<"Eligable for voting";
    }
    else{
        cout<<"Not eligable for voting";
    }
    return 0;
}