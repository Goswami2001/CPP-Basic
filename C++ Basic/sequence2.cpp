//Write a program to generate following sequence : -8 -4 0 4 8 12 16 ..............
#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter the starting point : ";
    cin>>start;
    cout<<"Enter the ending point : ";
    cin>>end;
    for(int i = start;i <= end;){
        cout<<i<<"  ";
        i = i+4;
    }
    return 0;
}