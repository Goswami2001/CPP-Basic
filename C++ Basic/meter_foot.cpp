//Write a c++ program to convert meter to foot.
#include<iostream>
using namespace std;
int main(){
    double meter,foot;
    cout<<"Enter the length in meter : ";
    cin>>meter;
    foot = (3.28084 * meter);
    cout<<"In foot will be : "<<foot<<endl;
    return 0;
}