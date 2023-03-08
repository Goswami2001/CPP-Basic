//Write a c++ program to generate following pattern:
                                                    // *      *
                                                    //  *    * 
                                                    //   *  *  
                                                    //    **  
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < rows;j++){
            if(i == j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int k = 0; k <rows;k++){
            if(i + k == (rows-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
