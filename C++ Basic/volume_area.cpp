//Write a program in C++ to calculate the volume of a cube
#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter the length of the cube : ";
    cin>>length;
    int volume = ((length*length)*length);
    cout<<"Volume of the cube will be : "<<volume<<endl;
    return 0;
}