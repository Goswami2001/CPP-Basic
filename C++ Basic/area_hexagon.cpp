// Write a program in C++ to print the area of a hexagon.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float side;
    cout<<"Enter the length of the side : ";
    cin>>side;
    //Formula for calculating area of hexagon
    float area = (6*(side*side))/(4*tan(M_PI/6));
    cout<<"Area of the hexagon will be : "<<area<<endl;
    return 0;
}