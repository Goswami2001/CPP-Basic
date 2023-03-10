//Write a c++ program to generate following pattern:
                                                    //     1
                                                    //    2 2
                                                    //   3   3
                                                    //  4     4
                                                    // 555555555

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
        for(int k = 1; k <= i;k++){
            if(i == rows || k == 1){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        for(int l = i-1;l >= 1;l--){
            if(l == 1 || i == rows){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
