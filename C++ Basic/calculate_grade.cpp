//Write a program to calculate grade of a student
#include<iostream>
using namespace std;
int main(){
    int math,physics,chemistry,biology,bengali,english;
    cout<<"Enter the marks of Math : ";
    cin>>math;
    cout<<"Enter the marks of Physics : ";
    cin>>physics;
    cout<<"Enter the marks of Chemistry: ";
    cin>>chemistry;
    cout<<"Enter the marks of Biology : ";
    cin>>biology;
    cout<<"Enter the marks of Bengali : ";
    cin>>bengali;
    cout<<"Enter the marks of English : ";
    cin>>english;
    int total = (math + physics + chemistry + biology + bengali +english)/6;
    if(total >= 95){
        cout<<"GRADE : O ";
    }
    if(total >= 85 && total < 95){
        cout<<"GRADE : E ";
    }
    if(total >= 75 && total < 85){
        cout<<"GRADE : A ";
    }
    if(total >= 65 && total < 75){
        cout<<"GRADE : B ";
    }
    if(total >= 55 && total < 65){
        cout<<"GRADE : C ";
    }
    if(total >= 45 && total < 55){
        cout<<"GRADE : D ";
    }
    if(total < 45){
        cout<<"GRADE : FAIL ";
    }
    return 0;
}
