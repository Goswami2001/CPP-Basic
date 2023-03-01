// Write a program in c++ to generate following pattern for given rows and cols[Here it's 5,6] :
//                                                        1 2 3 4 5 6 
//                                                        1         6 
//                                                        1         6  
//                                                        1         6  
//                                                        1 2 3 4 5 6
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
            if(i == 1 || i == rows || j == 1 || j == cols){
                cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}