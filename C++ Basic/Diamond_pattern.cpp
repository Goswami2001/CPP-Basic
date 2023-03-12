//Write a c++ program to generate following pattern:
                                                    // Enter the no. of rows : 4
                                                    //    *
                                                    //   ***
                                                    //  *****
                                                    // *******
                                                    // *******
                                                    //  *****
                                                    //   ***
                                                    //    *
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    for(int i = 1;i <= rows;i++){
        for(int j = 1;j <= (rows - i);j++){
            cout<<" ";
        }
        for(int k = 1;k <= (2 * i - 1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = rows;i >= 1;i--){
        for(int j = 1;j <= (rows - i);j++){
            cout<<" ";
        }
        for(int k = 1;k <= (2 * i - 1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}