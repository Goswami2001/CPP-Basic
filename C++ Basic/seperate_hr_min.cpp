//Write a C++ program to convert a given number into hours and minutes. Separate the number of hours and minutes with a colon
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int hr = num/60;
    int min = num%60;
    cout<<"Time will be : ";
    cout<<hr<<" : "<<min;
    return 0;
}