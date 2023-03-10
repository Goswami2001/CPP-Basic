//Write a c++ program to calculate internet browsing bill
#include<iostream>
using namespace std;
int main(){
    double hour;
    cout<<"Enter the no. of min you use internet : ";
    cin>>hour;
    if(hour > 180){
        cout<<"Your bill will be : 100"<<endl;
    }
    else if(hour < 180 && hour > 120){
        cout<<"Your bill will be : 60";
    }
    else if(hour < 120 && hour > 60){
        cout<<"Your bill will be : 40";
    }
    else if(hour <= 30){
        cout<<"Your bill will be : 10";
    }
    else if(hour <= 60){
        cout<<"Your bill will be : 20";
    }
    return 0;
}