//Write a program in C++ to find the third angle of a triangle
#include<iostream>
using namespace std;
int main(){
    
    float angle1,angle2;
    cout<<"Enter the first angle : ";
    cin>>angle1;
    cout<<"Enter the second angle : ";
    cin>>angle2;
    float angle3 = (180-(angle1+angle2));
    cout<<"Last angle of the triangle will be : "<<angle3<<endl;
    return 0;
}