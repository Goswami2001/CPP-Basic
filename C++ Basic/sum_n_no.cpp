//Write a C++ program to add all the numbers from 1 to a given number.
#include<iostream>
using namespace std;
int main(){
    int max;
    cout<<"Enter the maximum length : ";
    cin>>max;
    int sum = 0;
    for(int i=1;i<=max;i++){
        sum = sum+i;
    }
    cout<<"Total sum will be : "<<sum<<endl;
    return 0;
}