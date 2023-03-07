//Write a program to generate following pattern :
//                                                      1 
//                                                      0  0 
//                                                      1  1  1 
//                                                      0  0  0  0 
//                                                      1  1  1  1  1 
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    for(int i = 1;i <= rows;i++){
        for(int j = 1; j <= i;j++){
            if(i % 2 == 0){
                cout<<" 0 ";
            }
            else{
                cout<<" 1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}