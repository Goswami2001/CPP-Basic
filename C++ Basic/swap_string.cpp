//Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them
#include<iostream>
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter your first name : ";
    cin>>str1;
    cout<<"Enter your last name : ";
    cin>>str2;
    swap(str1,str2);
    cout<<"In reverse it will be : "<<str1<<" "<<str2<<endl;
    return 0;
}