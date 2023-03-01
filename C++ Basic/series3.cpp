//write a program to calculate sum of following series : 1+2+3+4...........+n
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the maximum range : ";
    cin>>num;
    int sum = 0;
    for(int i = 0;i <= num;i++){
        sum += i;
    }
    cout<<"Sum of the following series will be : "<<sum<<endl;
    return 0;
} 