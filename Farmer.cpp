

#include <iostream>


using namespace std;
int farm(int chickens,int cows,int sanzuwus)
    {

    chickens=chickens*2;
    cows=cows*4;
    sanzuwus=sanzuwus*3;
    int totalNumberOflegs;
totalNumberOflegs=cows+chickens+sanzuwus;
return totalNumberOflegs;
    }
int main()
{
    int chickens,cows,sanzuwus;
    cout<<"Please enter chickens"<<endl;
        cin>>chickens;
        cout<<"Please enter cows"<<endl;
        cin>>cows;
        cout<<"Please enter sanzuwus"<<endl;
        cin>>sanzuwus;
    
    cout<<farm(chickens,cows,sanzuwus)<<" " ;
    cout<<"is the total number of legs"<<endl;
    
    
    return 0;
}
