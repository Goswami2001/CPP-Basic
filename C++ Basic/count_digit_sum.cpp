//Write a C++ program to compute the sum of the two given integers and count the number of digits of the sum value
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    int sum = (num1+num2);
    cout<<"Sum will be : "<<sum<<endl;
    int count = 0;
    while(sum>0){
        sum = sum/10;
        count++;
    }
    cout<<"Total no. of digit : "<<count<<endl;
    return 0;
}