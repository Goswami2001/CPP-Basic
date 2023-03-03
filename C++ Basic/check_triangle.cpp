//Write a C++ program to check whether a triangle can be formed by the given value for the angles.
#include<iostream>
using namespace std;
int main(){
    float angle1,angle2,angle3;
    int total;
    cout<<"Enter the angle of first-angle : ";
    cin>>angle1;
    cout<<"Enter the angle of second-angle : ";
    cin>>angle2;
    cout<<"Enter the angle of third-angle : ";
    cin>>angle3;
    total = (angle1 + angle2 + angle3);
    if(total == 180){
        cout<<"Tri-angle will be formed";
    }
    else{
        cout<<"Tri-angle can not be formed";
    }
    return 0;
}