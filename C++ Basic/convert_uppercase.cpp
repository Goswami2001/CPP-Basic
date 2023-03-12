//Write a c++ program to convert a string into uppercase
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    //transform() is a function and ::toupper is a STL which convert a string into upper-case
    transform(str.begin(),str.end(),str.begin(), :: toupper);
    cout<<"After making uppercase : "<<str<<endl;
    return 0;
}