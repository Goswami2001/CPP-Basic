//Write a c++ program to find no. of distinct elements in string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a name : ";
    cin>>str;
    sort(str.begin(),str.end());
    int ans = 0;
    for(int i = 0;i < str.size();i++){
        if(str[i] != str[i+1]){
            ans++;
        }
    }
    cout<<"No. of distinct elements in the string : "<<ans<<endl;
    return 0;
}