//Write a program in C++ to enter length in centimeter and convert it into meter and kilometer
#include<iostream>
using namespace std;
int main(){
    float centimeter;
    cout<<"Enter the length in centimeter  : ";
    cin>>centimeter;
    float meter = (centimeter / 100);
    float kilometer = (meter / 1000);
    cout<<"Length in meter : "<<meter<<" and length in kilometer will be : "<<kilometer<<endl;
    return 0;
}