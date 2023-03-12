// Write a c++ program to generate following pattern:
                                                    // Enter the no. of rows : 3
                                                    // Enter the no. of cols : 9
                                                    //   *   *  
                                                    //  * * * * 
                                                    // *   *   *
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    cout<<"Enter the no. of cols : ";
    cin>>cols;
    for(int i = 1;i <= rows;i++){
        for(int j = 1;j <= cols;j++){
            if(((i + j) % 4 == 0) || (i == 2 && j % 4 == 0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}