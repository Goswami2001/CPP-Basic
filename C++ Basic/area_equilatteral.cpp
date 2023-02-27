//Write a program in C++ to calculate area of an equilateral triangle
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float side;
    cout<<"Enter the length of side : ";
    cin>>side;
    float area = sqrt(3)*(side*side)/4;
    cout<<"Area of equilatteral triangle will be : "<<area<<endl;
    return 0;
}