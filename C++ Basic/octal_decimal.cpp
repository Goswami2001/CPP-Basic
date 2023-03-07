//Write a c++ program to convert an octal number into decimal number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a octal number : ";
    cin>>num;
    int power = 1;
    int answer = 0;
    while(num != 0){
        int total = (num % 10);
        answer += (total * power);
        power = (power * 8);
        num = num/10;
    }
    cout<<"Binary number will be : "<<answer<<endl;
    return 0;
}