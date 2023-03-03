//Write C++ program to print all natural numbers in reverse order
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter maximum range of natural number : ";
    cin>>num;
    for(int i = num;i > 0;i--){
        cout<<"Number is : "<<i<<endl;
    }
    return 0;
}