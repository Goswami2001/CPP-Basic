//Write a c++ program to print flyod's triangle
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the total no. of rows : ";
    cin>>rows;
    int count = 1;
    for(int i = 1;i <= rows;i++){
        for(int j = 1;j <= i;j++){
            cout<<count<<"  ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}