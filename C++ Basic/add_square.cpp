//Write a c++ program that will take three digits from the user and add the square of each digit.
#include<iostream>
using namespace std;
int main(){
    int num,stop;
    cout<<"Choose a stopping number : "<<endl;
    cin>>stop;
    int ans = 0;
    while(num != stop){
        cout<<"Enter a number : ";
        cin>>num;
        ans += (num * num);
    }
    cout<<"Addition will be : "<<(ans - (stop * stop))<<endl;
    return 0;
}