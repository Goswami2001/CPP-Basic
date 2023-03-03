//Write a C++ program to check uppercase or lowercase alphabets.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character to see the result : ";
    cin>>ch;
    int check = int(ch);
    if(check > 91){
        cout<<"Upper case of the alphabet will be : "<<char(check - 32)<<endl;
        cout<<"Lower case of the alphabet will be : "<<char(check);
    }
    else if(check > 65 && check <= 91){
        cout<<"Upper case of the alphabet will be : "<<char(check)<<endl;
        cout<<"Lower case of the alphabet will be : "<<char(check + 32);
    }
    return 0;
}