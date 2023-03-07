//Write a c++ program to convert decimal number into binary number
#include<iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter a decimal number : ";
   cin>>num;
   int ans = 0;
   int power = 1;
   while(num != 0){
    int total = (num % 2);
    ans += (total * power);
    power = (power * 10);
    num = num/2;
   }
   cout<<"In decimal it will be : "<<ans<<endl;
   return 0;
}