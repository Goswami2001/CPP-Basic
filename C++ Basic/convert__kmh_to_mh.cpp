//Write a program in C++ that converts kilometers per hour to miles per hour
#include<iostream>
using namespace std;
int main(){

    float kmh;
    cout<<"Enter the speed into kilometer per hour : ";
    cin>>kmh;
    float mh = (kmh*0.621);
    cout<<"The speed in mile per hour will be : "<<mh;
    return 0;
}