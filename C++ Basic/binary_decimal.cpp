//Write a c++ program to convert binary number into a decimal number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a binary number : ";
    cin>>num;
    int ans = 0;
    int power = 1;
    while(num != 0){
        int total = (num % 10);
        ans += (total * power);
        power = (power * 2);
        num = num/10;
    }
    cout<<"In decimal it will be : "<<ans;
    return 0;
}