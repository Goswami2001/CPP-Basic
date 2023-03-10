//Write a program to generate following sequence : -8 -5 -2 0 2 4 6 8..............
#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter the starting point : ";
    cin>>start;
    cout<<"Enter the ending point : ";
    cin>>end;
    for(int i = start;i <= end;){
        if( i == 1){
            i = 0;
        }
        cout<<i<<"  ";
        if(i < 0){
            i = i + 3;
        }
        else{
            i = i + 2;
        }
    }
    return 0;
}