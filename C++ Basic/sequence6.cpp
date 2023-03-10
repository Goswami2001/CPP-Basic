//Write a c++ program to generate following sequence : a b c d e f ............... w x y z
#include<iostream>
using namespace std;
int main(){
    char ch_start,ch_end;
    cout<<"Enter the starting character in small letter : ";
    cin>>ch_start;
    cout<<"Enter the ending character in small letter : ";
    cin>>ch_end;
    cout<<"Following sequence : ";
    for(char i = ch_start;i <= ch_end;i++){
        cout<<i<<"  ";
    }
    return 0;
}