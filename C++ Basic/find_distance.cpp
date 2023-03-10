//Write a c++ program to calculate distance when speed and time are given
#include<iostream>
using namespace std;
int main(){
    double speed,time,distance;
    cout<<"Enter the speed in meter/sec : ";
    cin>>speed;
    cout<<"Enter the time : ";
    cin>>time;
    distance = (speed * time);
    cout<<"Distance will covered : "<<distance<<" meter"<<endl;
    cout<<"Distance will covered : "<<(distance / 1000)<<" kilometer"<<endl;
    return 0;
}