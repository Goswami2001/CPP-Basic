// Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    cout<<"ASCII value of "<<ch<<" is : "<<int(ch)<<endl;
    return 0;
}