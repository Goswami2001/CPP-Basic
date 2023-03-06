//Write a c++ program to generate random number
#include<iostream>
#include<stdlib.h>  //for using rand() header file must be included
using namespace std;
int main(){
    int num;
    for(int i = 0;i < 20;i++){
        num = rand()%100; //rand() generates random number
        cout<<num<<"  ";
    }
    return 0;
}