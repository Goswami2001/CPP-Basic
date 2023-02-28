//Calculate whether an organization gain profit or loss
#include<iostream>
using namespace std;
int main(){
    int cost_price,sell_price;
    cout<<"Enter the cost price : ";
    cin>>cost_price;
    cout<<"Enter the selling price : ";
    cin>>sell_price;
    if(cost_price > sell_price){
        cout<<"Organization have a loss of amount : "<<(cost_price - sell_price)<<endl;
    }
    else if(sell_price > cost_price){
        cout<<"Organization have a loss of amount : "<<(sell_price - cost_price)<<endl;
    }
    else{
        cout<<"Neither profit nor loss will happen";
    }
    return 0;
}