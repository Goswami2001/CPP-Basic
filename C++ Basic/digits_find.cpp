//Write a program to calculate total digits that is present in the number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int digit = 0;
    while(num > 0){
        digit++;
        num = num/10;
    }
    cout<<"Total number of digit in the number : "<<digit<<endl;
    return 0;
}