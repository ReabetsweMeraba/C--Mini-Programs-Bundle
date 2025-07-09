#include <iostream>

using namespace std;

void accNumber (int accNum){
int digitRemoved = accNum/10;
int remeinder = digitRemoved % 7;
int lastDigits = accNum% 10;
if(accNum/7 != lastDigits)
cout<<"valid account number"<<endl;
else
cout<<"Invalid account number"<<endl;}

int main(){

    accNumber(123454);
    accNumber(123455);
    
    return 0;
}
