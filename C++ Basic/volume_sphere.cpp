//Write a program in C++ to calculate the volume of a sphere.
#include<iostream>
using namespace std;
int main()
{
    int radius;
    cout<<"Enter the radius of the sphere : ";
    cin>>radius;
    float volume = ((4*3.14)*radius)/3;
    cout<<"Volume of the sphere will be : "<<volume<<endl;
    return 0; 
}