//Write a c++ program to generate following sequence : A B C D E F G H I ........................ W X Y Z
#include<iostream>
using namespace std;
int main(){
    char ch_start,ch_end;
    cout<<"Enter the starting character in capital : ";
    cin>>ch_start;
    cout<<"Enter the ending charcter in capital : ";
    cin>>ch_end;
    cout<<"Sequence will be : ";
    for(char i = ch_start;i <= ch_end;i++){
        cout<<i<<"  ";
    }
    return 0;
}