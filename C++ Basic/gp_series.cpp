//Write a program in C++ to find the Sum of GP series
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int start,end,ratio,sum = 0;
    cout<<"Enter the starting point of G.P. series : ";
    cin>>start;
    cout<<"Enter the total elements of G.P. series : ";
    cin>>end;
    cout<<"Enter the common ratio between one element to another element in G.P. series : ";
    cin>>ratio;
    for(int i = start;i < (ratio* pow(ratio,end));i = (i * ratio)){
        sum += i;
    }
    cout<<"Sum of GP series : "<<sum<<endl;
    return 0;
}