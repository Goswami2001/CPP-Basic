//Write a c++ program to get armstrong number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the maximum range : ";
    cin>>num;
    for(int i = 1;i < num;i++){
        int t = i;
        int sum = 0;
        while(t != 0){
            sum += (t % 10) * (t % 10) * (t % 10);
            t = t/10;
        }
        if(sum == i){
            cout<<"Arm strong number : "<<i<<endl;
        }
    }
    return 0;
}