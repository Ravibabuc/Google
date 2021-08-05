#include <iostream>
#include<string>
using namespace std;
int main()
{
    string S;
    int k;
    int n;
    int NoOfiP;
    
    cin>>NoOfiP;
    for (int t= 1 ; t <=NoOfiP; t++)
    {
        cin >>n>>k;
        cin >>S;
        
        int x =0;
        for (int i =0;i <n/2;i++)
        {
             if ( S[i] != S[n-i -1] )
             {
                    x++;
             }
        }
        std::cout << "case #"<<t<< ": " <<abs(x - k)<< std::endl;
        
    }
    return 0;
}





