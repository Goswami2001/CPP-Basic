//Find out absolute number of an given number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an number : ";
    cin>>num;
    //Condition
    if(num < 0){
        cout<<"Absolute number is : "<<(num * (-1));
    }
    else{
        cout<<"Absolute number is : "<<num;
    }
    return 0;
}