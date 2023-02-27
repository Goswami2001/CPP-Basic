//Write a program in C++ to find the Area and Perimeter of a Rectangle
#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Enter the length of the rectangle : ";
    cin>>length;
    int width;
    cout<<"Enter the width of the reactangle : ";
    cin>>width;
    int area = (length * width);
    int perimeter = 2*(length + width);
    cout<<"Area of the rectangle : "<<area<<" and perimeter of the rectangle : "<<perimeter<<endl;
    return 0;
}