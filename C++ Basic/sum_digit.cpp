//Calculate the sum of the first and second last digit of a 5 digit number
#include<iostream>
using namespace std;
int main(){
    int first,second_last,last,num;
    cout<<"Enter a 5 digit number : ";
    cin>>num;
    first = num/10000;
    last = num % 10;
    second_last = ((num % 100)/10);
    cout<<"First number is : "<<first<<" and second last number is : "<<second_last;
    return 0;
}