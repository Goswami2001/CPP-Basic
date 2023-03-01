// Write a program in c++ to generate following pattern : # # # #
//                                                        # # # #
//                                                        # # # #
//                                                        # # # #
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter th no. of rows : ";
    cin>>rows;
    cout<<"Enter the no. of cols : ";
    cin>>cols;
    for(int i = 0 ;i < rows;i++){
        for(int j = 0;j < cols;j++){
            cout<<" # ";
        }
        cout<<endl;
    }
    return 0;
}