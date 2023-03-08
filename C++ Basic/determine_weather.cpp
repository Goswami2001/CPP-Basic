//Write a c++ program that will determine weather when the value oftemperature and humidity is provided by the user.
// TEMPERATURE(C)                      HUMIDITY(%)                    WEATHER
// >= 30                                 >=90                       Hot and Humid
// >= 30                                 < 90                            Hot
// <30                                  >= 90                       Cool and Humid
// <30                                   <90                            Cool
// <0                                    <90                          Super Cool
#include<iostream>
using namespace std;
int main(){
    double temp,humidity;
    cout<<"Enter the temperature in terms of degree centigrade : ";
    cin>>temp;
    cout<<"Enter the percentage of humidity : ";
    cin>>humidity;
    if(temp >= 30 && humidity >= 90){
        cout<<"Weather will be : Hot and Humid";
    }
    else if(temp >= 30 && humidity < 90){
        cout<<"Weather is Hot";
    }
    else if(temp < 30 && humidity >= 90){
        cout<<"Weather will be : Cold and Humidity";
    }
    else if(temp < 30 && humidity < 90){
        cout<<"Weather will be : Cold";
    }
    else if(temp < 0 && humidity < 90){
        cout<<"Weather will be : Super Cool even Frozen";
    }
    return 0;
}