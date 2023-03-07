//Write a program to generate following pattern:
//                                                 1 2 1 2 
//                                                 1 2 1 2 
//                                                 1 2 1 2 
//                                                 1 2 1 2
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    cout<<"Enter the no. of rows : ";
    cin>>cols;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++){
            if(j % 2 == 0){
                cout<<"1 ";
            }
            else{
                cout<<"2 ";
            }
        }
        cout<<endl;
    }
    return 0;
} 