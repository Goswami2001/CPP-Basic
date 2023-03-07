
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the no. of rows : ";
    cin>>rows; 
    cout<<"Enter the no. of rows : ";
    cin>>cols; 
    for(int i = 1;i <= rows;i++){
        for(int j = 1;j <= cols;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}