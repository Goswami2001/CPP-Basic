////Write a program to convert a string into a integer
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,str1;
    cout<<"Enter a string : ";
    cin>>str;
    cout<<"Enter another string : ";
    cin>>str1;

    //Using stoi function to pass string as arguments
    int num1 = stoi(str);
    int num2 = stoi(str1);
    cout<<"After integer convertion it will be : "<<num1<<endl;
    cout<<"After integer convertion it will be : "<<num2<<endl;
    return 0;
}