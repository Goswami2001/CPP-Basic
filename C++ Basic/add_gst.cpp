//Write a c++ program to add GST with product
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double price,total;
    cout<<"Enter the price : ";
    cin>>price;
    if(price > 20000){
        total = price + (price * 28) / 100;
    }
    else if(price > 5000){
        total = price + (price * 15) / 100;
    }
    else if(price > 1000 ){
        total = price + (price * 9) / 100;
    }
    else if(price > 500){
        total = price + (price * 3) / 100;
    }
    cout<<"After adding GST total price will be : "<<total<<endl;
    return 0;
}