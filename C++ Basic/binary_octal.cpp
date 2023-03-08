//Write a c++ program to convert a binary number into an octal number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a binary number : ";
    cin>>num;
    int ans = 0,decimal = 0;
    //Power of Binary number
    int power = 1;
    //Converting into Decimal number first
    while(num != 0){
        int total = (num % 10);
        decimal += (total * power);
        power *= 2;
        num /= 10;
    }
    //Power of Decimal number
    int product = 1;
    //Converting into Octal number 
    while(decimal != 0){
        int total = (decimal % 8);
        ans += (total * product);
        decimal /= 8;
        product *= 10;
    }
    cout<<"In octal the number will be : "<<ans<<endl;
    return 0;
}