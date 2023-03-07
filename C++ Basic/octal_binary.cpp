//Write a c++ program to convert octal number to binary number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a octal number : ";
    cin>>num;
    int decimal = 0,ans = 0;
    //Power of octal 
    int power = 1;
    //Converting into decimal first
    while(num != 0){
        int total = (num % 10);
        decimal += (total * power);
        power *= 8;
        num /= 10;
    }
    //power for decimal
    int product = 1;
    //Converting output decimal from octal into binary
    while(decimal != 0){
        int cal = (decimal %2);
        ans += (cal * product);
        decimal /= 2;
        product *= 10;
    }
    cout<<"In binary it will be : "<<ans<<endl;
    return 0;
}