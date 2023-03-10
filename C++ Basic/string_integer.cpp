//Write a program to convert a string into a integer
#include<iostream>
#include<string>
using namespace std;
int main(){
    //Here we can not use cin because we used a pointer here
    const char *str = "256";
    const char *str1 = "48.56";
    //atoi() is used to convert string to integer in c++
    cout<<"After converting it into interger it will be : "<<atoi(str)<<endl;
    cout<<"After converting it into interger it will be : "<<atoi(str1)<<endl;
    return 0;
}