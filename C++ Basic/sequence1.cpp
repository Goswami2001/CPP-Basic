//Write a c++ program to generate following sequence : 1 3 5 7 9 .....................
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
        i = i + 2;
    }
    return 0;
}