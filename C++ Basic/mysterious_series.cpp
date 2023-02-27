//Write a program in C++ to print a mystery series from 1 to 50
#include<iostream>
using namespace std;
int main(){
    int num = 1;
    while(true){
        ++num;
        if ((num % 3) == 0) 
            continue;
        if(num == 50){
            break;
        }
        if(num%2 ==0){
            num+=3;
        }
        else{
            num-=3;
        }
        cout<<"Series are : "<<num<<endl;
    }
    cout<<endl;
}