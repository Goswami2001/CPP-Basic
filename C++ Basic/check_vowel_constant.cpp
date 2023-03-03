//Write a C++ program to check entered character vowel or consonant.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        cout<<"Entered character is a vowel";
        
    }
    else{
        cout<<"Entered character is a constant";
    }
    return 0;
}