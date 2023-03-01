// Write a program in c++ to generate following pattern : 1 2 3 4 5 6 7 8 9
//                                                        2 3 4 5 6 7 8 9 1
//                                                        3 4 5 6 7 8 9 1 2 
//                                                        4 5 6 7 8 9 1 2 3
//                                                        5 6 7 8 9 1 2 3 4
//                                                        6 7 8 9 1 2 3 4 5
//                                                        7 8 9 1 2 3 4 5 6
//                                                        8 9 1 2 3 4 5 6 7
//                                                        9 1 2 3 4 5 6 7 8
#include<iostream>
using namespace std;
int main(){
    int num = 9;
    for(int i = 1;i < (num+1);i++){
        for(int j = i;j < (num+1);j++){
            cout<<j<<" ";
        }
        for(int k = 1;k < i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}