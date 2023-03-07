//Write a program to generate following pattern:    
                                            //     1
                                            //    12
                                            //   123
                                            //  1234
                                            // 12345
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the no. of rows : ";
    cin>>rows;
    for(int i = 1;i <= rows;i++){
        for(int j = 1; j <= (rows - i);j++){
            cout<<" ";
        }
        for(int k = 1;k <= i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}