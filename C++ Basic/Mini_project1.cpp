//Build a simple calculator using basic operators who can take only 2 values
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the number : ";
    cin>>num1;
    cout<<"Enter the number : ";
    cin>>num2;
    char symbol;
    cout<<"Enter the symbol : ";
    cin>>symbol;
        if(symbol == '+'){
            cout<<"Answer will be : "<<(num1 + num2)<<endl;
        }
        if(symbol == '-'){
            cout<<"Answer will be : "<<(num1 - num2)<<endl;
        }
        if(symbol == '*'){
            cout<<"Answer will be : "<<(num1 * num2)<<endl;
        }
        if(symbol == '/'){
            cout<<"Answer will be : "<<(num1 / num2)<<endl;
        }
        if(symbol == '%'){
            cout<<"Answer will be : "<<(num1 % num2)<<endl;
        }
    return 0;
}