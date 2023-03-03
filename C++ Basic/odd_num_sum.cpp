//Write C++ program to find sum of odd numbers between 1 to n
#include<iostream>
using namespace std;
int main(){
    int num,sum = 0;
    cout<<"Enter the maximum range of the number : ";
    cin>>num;
    for(int i = 0;i <= num;i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    cout<<"Total sum : "<<sum<<" for given range 0 to "<<num<<endl;
    return 0;
}