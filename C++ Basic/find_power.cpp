//Given 2 numbers A and B.find a program where it's result will be A to the power B
#include<iostream>
using namespace std;
int main(){
    int A,B;
    cout<<"Enter the number : ";
    cin>>A;
    cout<<"Enter the power : ";
    cin>>B;
    int ans = 1;
    for(int i = 1;i <= B;i++){
        ans = ans * A;
    }
    cout<<"Anser will be : "<<ans<<endl;
    return 0;
}