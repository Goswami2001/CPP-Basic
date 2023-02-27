//Write a program in C++ to check the upper and lower limits of data types
#include<iostream>
#include<climits>//Must include this header file for getting data limits
using namespace std;
int main(){
    cout<<"Limits of data type : "<<endl;
    cout<<"Upper limit of  integer data type : "<<INT64_MAX<<endl;
    cout<<"Lower limit of  integer data type : "<<INT64_MIN<<endl;
    cout<<"Upper limit of Unsigned integer data type : "<<UINT64_MAX<<endl;
    cout<<"Upper limit of  long long data type : "<<__LONG_LONG_MAX__<<endl;
    cout<<"Upper limit of  char bit : "<<__CHAR_BIT__<<endl;
    cout << "The maximum limit of char data type : " << CHAR_MAX << endl;
	cout << "The minimum limit of char data type : " << CHAR_MIN << endl;
	cout << "The maximum limit of signed char data type : " << SCHAR_MAX << endl;
	cout << "The minimum limit of signed char data type : " << SCHAR_MIN << endl;
	cout << "The maximum limit of unsigned char data type : " << UCHAR_MAX << endl;
	cout << "The minimum limit of short data type : " << SHRT_MIN << endl;
    cout << "The maximum limit of short data type : " << SHRT_MAX << endl;
    cout << "The maximum limit of unsigned short data type : " << USHRT_MAX << endl;
    cout << "The minimum limit of long long data type : " << LLONG_MIN << endl;
	cout << "The maximum limit of unsigned long long data type : " << ULLONG_MAX << endl;
}