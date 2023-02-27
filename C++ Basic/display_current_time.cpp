//Write a C++ program to display the current date and time.
#include <ctime>   
#include <iostream>  
using namespace std;  
  
int main()  
{  
    time_t now = time(0);
    char* dt = ctime(&now);
    cout<<"Local date and time is : "<<dt<<endl;
    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout<<"UTC date and time now : "<<dt<<endl;
    return 0;
}
