//Write C++ program to find HCF of two numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2,min = INT32_MIN,HCF = 1;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    //For calculating minimum value
    min = (num1 < num2) ? num1 : num2;
    for(int i = 1;i <= min;i++){
        if(num1 % i == 0 && num2 % i == 0){
            HCF = i;
        }
    }
    cout<<"HCF of "<<num1<<" and "<<num2<<" is : "<<HCF<<endl;
    return 0;
}