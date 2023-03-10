//Write a c++ program to calculate speed when distance and time are given
#include<bits/stdc++.h>
using namespace std;
int main(){
    double distance,time;
    cout<<"Enter the distance in meter : ";
    cin>>distance;
    cout<<"Enter the time required to cover the distance in second : ";
    cin>>time;
    if(time == 0){
        cout<<"Practically that is not possible";
    }
    else if(time >= INT_MAX && distance >= INT_MAX){
        cout<<"Invalid input";
    }
    else if(time <= INT_MIN && distance <= INT_MIN){
        cout<<"Invalid input";
    }
    else{
        cout<<"Speed will be : "<<(distance / time)<<" meter/sec"<<endl;
    }
    return 0;
}