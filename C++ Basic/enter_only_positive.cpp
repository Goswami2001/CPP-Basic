//Write a program to print positive number entered by the user;if user enters a negative number then skipped
#include<iostream>
using namespace std;
int main(){
    cout<<"<----------Enter 999 for stop the number-------------->"<<endl;
    while(true){
        int num;
        cout<<"Enter the number : ";
        cin>>num;
        if(num == 999){
            break;
        }
        else if(num < 0){
            continue;
        }
        else{
            cout<<num<<endl;
        }
    }
    return 0;
}