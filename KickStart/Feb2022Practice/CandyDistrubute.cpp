#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int SovFunction()
{
  
    int T=0;
    cin>>T;
    int *N = new int [T];
    int *M = new int [T];
    int *CBag = new int [T]; 
  //  Cbag.resize(T);
    int total = 0;
    for (int k =0;k< T;k++)
    {
        cin>>N[k];
        cin>>M[k];
         int total = 0;
         int Can = 0;
        for(int i =0;i<N[k];i++)
        {
            cin>>Can;
            total = total+Can;
        }
        CBag[k]=total;
    }
    
    for (int k =0;k< T;k++)
    {
        int res= CBag[k] % M[k] ;
        cout<<"Case #"<<k+1<<": "<<res<<endl;
    }

   
    return 0;
}

int main()
{
    SovFunction();
    return 0;
}
