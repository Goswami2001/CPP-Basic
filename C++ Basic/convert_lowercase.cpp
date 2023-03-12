//Write a c++ program to convert a string into lower-case
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
     //transform() is a function and ::tolower is a STL which convert a string into upper-case
    transform(str.begin(),str.end(),str.begin(), :: tolower);
    cout<<"In lower case it will be : "<<str<<endl;
    return 0;
}