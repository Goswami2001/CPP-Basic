//Check whether it's square or not according to user input
#include<iostream>
using namespace std;
int main(){
    int length,bredth;
    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the bredth : ";
    cin>>bredth;
    //Condition checking
    if(length != bredth){
        cout<<"On the basis of given input it's not a square";
    }
    else{
        cout<<"On the basis of given input it's a square";
    }
    return 0;
}