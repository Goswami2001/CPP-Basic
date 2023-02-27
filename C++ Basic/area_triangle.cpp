//Write a program in C++ to find the area of any triangle using Heron's Formula
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter the length of first side : ";
    cin>>side1;
    cout<<"Enter the length of second side : ";
    cin>>side2;
    cout<<"Enter the length of third side : ";
    cin>>side3;
    int s = (side1+side2+side3)/2;
    float area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    cout<<"Area according to Heron's formula will be : "<<area<<endl;
    return 0;
}