//Write a program in C++ to calculate the volume of a Cone
#include<iostream>
using namespace std;
int main(){
    float radius,height;
    cout<<"Enter the radius of the cone : ";
    cin>>radius;
    cout<<"Enter the height of the cone : ";
    cin>>height;
    float volume = (1.0/3.0)*(3.14*(radius*radius))*height;
    cout<<"Volume of the cone will be : "<<volume<<endl;
    return 0;
}