//Write C++ program to calculate power using while & for loop
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the maximum range of the number : ";
    cin>>num;
    cout<<"Using for loop : ";
    for(int i = 1;i <= num;i++){
        cout<<(i*i)<<" ";
    }
    cout<<endl;
    cout<<"Using while loop : ";
    int i = 1;
    while(i <= num){
        cout<<(i*i)<<" ";
        i++;
    }
    return 0;
}