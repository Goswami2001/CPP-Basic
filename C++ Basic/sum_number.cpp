//Calculate the sum of 3 digit number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a 3 digit number : ";
    cin>>num;
    int sum = 0;
    while(num>0){
        int total = num%10;
        sum += total;
        num = num/10;
    }
    cout<<"Total sum of "<<num<<" will be : "<<sum;
    return 0;
}