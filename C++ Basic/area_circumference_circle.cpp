//Write a program in C++ to find the area and circumference of a circle
#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"Enter the radius of the circle : ";
    cin>>radius;
    //Formula for calculating area of circle
    float area = 4*(3.14*(radius*radius));
    //Formula for calculating circumference of circle
    float circumference = 2*(3.14*radius);
    cout<<"Area of the circle : "<<area<<" and circumference of the circle will be : "<<circumference<<endl;
    return 0;
}