//Write a c++ program to convert an decimal number into octal number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a decimal number : ";
    cin>>num;
    int ans = 0;
    int power = 1;
    while(num != 0){
        int total = (num % 8);
        ans += (total * power);
        power = (power * 10);
        num /= 8;
    }
    cout<<"In octal the number will be : "<<ans<<endl;
    return 0;
}