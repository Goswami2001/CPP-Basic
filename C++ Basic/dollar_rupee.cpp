//Write a c++ program to convert Dollar into Rupees
#include<iostream>
using namespace std;
int main(){
    float dollar;
    cout<<"Enter the amount in Dollar : ";
    cin>>dollar;
    float rupees = (dollar * 81.71);
    cout<<"In Rupees it will be : "<<rupees<<endl;
    return 0;
}