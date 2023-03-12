//Write a c++ program to generate following pattern :
                                                    // Enter the no. of rows : 5
                                                    // Enter the no. of cols : 5
                                                    //     * * * * * 
                                                    //    * * * * * 
                                                    //   * * * * * 
                                                    //  * * * * * 
                                                    // * * * * * 
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    cout<<"Enter the no. of cols : ";
    cin>>cols;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j<(rows - i - 1);j++){
            cout<<" ";
        }
        for(int k = 0;k < rows;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}