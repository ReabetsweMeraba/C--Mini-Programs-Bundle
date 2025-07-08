#include <iostream>

using namespace std;

int main(){

    int totalStudent, filterValue;
    int count=0;
    
    cout<<"please enter the total number of students"<<endl;
    cin>>totalStudent;
    
int testScores[totalStudent];
cout<<"Enter test scores"<<endl;
for(int r=0; r<totalStudent; r++)
{cin>>testScores[r];}
cout<<"please enter filter value"<<endl;
cin>>filterValue;
cout<<"marks for top students"<<endl;
for(int b=0;b<totalStudent;++b)
{
    if(testScores[b]>filterValue)
    { cout<<testScores[b]<<" " ;
    ++count;
    
    }
} 
cout<<endl;
 cout<<"number of top students:"<< " "<<count<<endl;  

    return 0;
}
