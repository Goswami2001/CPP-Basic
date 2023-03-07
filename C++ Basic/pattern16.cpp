//Write a program to generate following pattern:
//                                                 1 2 3 4 
//                                                 1     4 
//                                                 1     4 
//                                                 1 2 3 4 
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
            if(i == 1 || i == rows || j == 1 || j == cols){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}