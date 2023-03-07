//Write a C++ program to check whether a given number is a power of two or not
#include<bits/stdc++.h>
using namespace std;

//Creating Function
string ispower(int num,int power){
    for(int i = 0;i < INT_MAX;i++){
        if(pow(num,i) == power){
            return "True";
        }
        else if(pow(num,i) > power){
            break;
        }
    }
    return "False";
}

int main(){
    int num,power;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Enter the power : ";
    cin>>power;
    cout<<power<<" is a power of "<<num<<" :"<<ispower(num,power)<<endl;
    return 0;
}