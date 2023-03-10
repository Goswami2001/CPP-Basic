//Write a c++ program to find out Hypotenuse

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double base,height,hypotenuse;
    cout<<"Enter the Base value : ";
    cin>>base;
    cout<<"Enter the Height value : ";
    cin>>height;
    hypotenuse = sqrt((base * base) + (height * height));
    cout<<"Hypotenuse of base : "<<base<<" and height : "<<height<<"  will be : "<<hypotenuse<<endl;
    return 0;
}