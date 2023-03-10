//Write a program to generate following sequence : -8 -4 0 2 4 6 8 10 12 14 16 ..............
#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter the starting point : ";
    cin>>start;
    cout<<"Enter the ending point :  ";
    cin>>end;
    for(int i = start;i <= end;){
        cout<<i<<"  ";
        if(i < 0){
            i = i + 4;
        }
        else{
            i = i +2;
        }
    }
    return 0;
}