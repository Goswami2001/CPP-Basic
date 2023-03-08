//Write a c++ program to convet following pattern:
                                                // *####
                                                // #*###
                                                // ##*##
                                                // ###*#
                                                // ####*
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < rows;j++){
            if(i == j){
                cout<<"*";
            }
            else{
                cout<<"#";
            }
        }
        cout<<endl;
    }
}