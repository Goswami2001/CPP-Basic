//Write a program to generate following series: x + x^2 + x^3 +..........+x^n
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of X : ";
    cin>>x;
    int ans = 0;
    cout<<"following series will be : ";
    for(int i = 1;i <= x;i++){
        cout<<(i*i)<<" ";
        ans += (i * i);
    }
    cout<<endl<<"Total will be : "<<ans<<endl;
    return 0;
}