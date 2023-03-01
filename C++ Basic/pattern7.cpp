// Write a program in c++ to generate following pattern :     #
//                                                          # # #
//                                                        # # # # #
//                                                       # # # # # # #
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    for(int i = 0;i < rows ;i++){
        for(int j = 0;j < (rows - i);j++){
            cout<<" ";
        }
        for(int k = 0;k < (2 * i) + 1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}