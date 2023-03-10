//Write a program to generate following sequence : 1 4 9 16 25 36 ...............n
#include<iostream>
using namespace std;
int main(){
    int end;
    cout<<"Enter the ending point : ";
    cin>>end;
    cout<<"Sequence will be : ";
    for(int i = 1;i <= end;i++){
        cout<<(i * i)<<"  ";
    }
    return 0;
}