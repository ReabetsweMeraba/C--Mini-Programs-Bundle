#include <iostream>

using namespace std;
int year;
void leapYear (int year){
    cout<<"please enter a value of your choice"<<endl;
    cin>>year;
if(year%4 != 0)
cout<<"normal year"<<endl;
else
cout<<"leap year"<<endl;}

int main(){

    leapYear(year);
    return 0;
}
