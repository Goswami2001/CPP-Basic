//Write a program in C++ to display the n terms of harmonic series and their sum
#include<iostream>
using namespace std;
int main(){
    int num;
    float sum = 0.0;
    cout<<"Enter the maximum range of the number : ";
    cin>>num;
    for(int i = 1;i <= num;i++){
        sum += (1 / float(i));
    }
    cout<<"Sum of the harmoic series will be : "<<sum<<endl;
    return 0;
}