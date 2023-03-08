//Write a c++ program to convert meter into kilometer
#include<iostream>
using namespace std;
int main(){
    double meter,kilometer;
    cout<<"Enter the length in meter : ";
    cin>>meter;
    kilometer = (meter / 1000 );
    cout<<"In kilometer it will be : "<<kilometer<<endl;
    return 0;
}