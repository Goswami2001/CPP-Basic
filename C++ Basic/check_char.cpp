//Write a C++ program to check whether a character is alphabet, digit or special character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a charcter : ";
    cin>>ch;
    int check = int(ch);
    if(check > 65 && check < 91){
        cout<<"IT's a alphabet";
    }
    else if(check > 97 && check < 123){
        cout<<"IT's a alphabet";
    }
    else if(check > 58 && check < 64){
        cout<<"IT's a special character ";
    }
    else if(check > 32 && check < 47){
        cout<<"IT's a special character ";
    }
    else if(check > 91 && check < 96){
        cout<<"IT's a special character ";
    }
    else if(check > 123 && check < 126){
        cout<<"IT's a special character ";
    }
    else if(check > 49 && check < 57){
        cout<<"IT's a digit ";
    }
}