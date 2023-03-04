//Write a program in C++ to find out the sum of an A.P. series
#include<iostream>
using namespace std;
int main(){
    int start,end,diff,sum = 0;
    cout<<"Enter the starting point of A.P. series : ";
    cin>>start;
    cout<<"Enter the total elements of A.P. series : ";
    cin>>end;
    cout<<"Enter the difference between one element to another element in A.P. series : ";
    cin>>diff;
    for(int i = start; i < (end * diff); i = i +diff){
        sum += i;
    }
    cout<<"Sum of an A.P. series will be : "<<sum<<endl;
    return 0;
}