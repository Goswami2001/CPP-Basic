//Findout which number is greater in between two numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    if(num1 > num2){
        cout<<"Maximum number is : "<<num1;
    }
    else if(num2 > num1){
        cout<<"Maximum number is : "<<num2;
    }
    else{
        cout<<"Both number is equal";
    }
    return 0;
}