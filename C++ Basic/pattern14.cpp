#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    for(int i = 1;i <= rows;i++){
        for(int j = 1; j <= i;j++){
            cout<<j;
        }
        int space = (2 * rows) - (2 * i);
        for(int k = 1;k <= space;k++){
            cout<<" ";
        }
        for(int j = 1; j <= i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    for(int i = rows;i >= 1;i--){
        for(int j = 1; j <= i;j++){
            cout<<j;
        }
        int space = (2 * rows) - (2 * i);
        for(int k = 1;k <= space;k++){
            cout<<" ";
        }
        for(int j = 1; j <= i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}