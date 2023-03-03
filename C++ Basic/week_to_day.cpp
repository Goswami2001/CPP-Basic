//Write a C++ program to print day name of week.
#include<iostream>
using namespace std;
int main(){
    int day,days,weeks;
    cout<<"Enter the value : ";
    cin>>day;
    days = (day % 7);
    weeks = (day % 7);
    if(days == 0){
        cout<<"It's monday of the week : "<<weeks<<endl;
    }
    else if(days == 1){
        cout<<"It's tuesday of the week : "<<weeks<<endl;
    }
    else if(days == 2){
        cout<<"It's wednesday of the week : "<<weeks<<endl;
    }
    else if(days == 3){
        cout<<"It's thrusday of the week : "<<weeks<<endl;
    }
    else if(days == 4){
        cout<<"It's friday of the week : "<<weeks<<endl;
    }
    else if(days == 5){
        cout<<"It's saturday of the week : "<<weeks<<endl;
    }
    else if(days == 6){
        cout<<"It's sunday of the week : "<<weeks<<endl;
    }
    return 0;
}