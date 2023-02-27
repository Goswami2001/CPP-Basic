//Write a program in C++ to calculate the volume of a cylinder
#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"Enter the radius of the cylinder : ";
    cin>>radius;
    int height;
    cout<<"Enter the height of the cylinder : ";
    cin>>height;
    float volume = (3.14*(radius*radius)*height);
    cout<<"Volume of the cylinder will be : "<<volume<<endl;
    return 0;
}