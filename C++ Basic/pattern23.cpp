//Write a c++ program to generate following pattern:
                                                    // # * # * # 
                                                    // # * # * # 
                                                    // # * # * # 
                                                    // # * # * # 
                                                    // # * # * # 
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    for(int i = 1;i <= rows;i++){
        for(int j = 1;j <= rows;j++){
            if(j % 2 == 0){
                cout<<"* ";
            }
            else{
                cout<<"# ";
            }
        }
        cout<<endl;
    }
    return 0;
}