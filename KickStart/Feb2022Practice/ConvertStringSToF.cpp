#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void SovFunction()
{
    int t;
    cin >> t;
    for(int k = 1; k <= t; k++) 
    {
        string S;
        string Des;
        cin >> S ;
        cin>> Des;
        long ans =0;
        int b;
    
        for(int i=0;i< S.size();i++)
        {
            int c =S[i];
            int TmpAns=INT_MAX;
            for(int j =0;j<Des.size();j++)
            {
                int d =Des[j];
                int tmp1 =min(abs(c-d) , abs(26-c+d) );
                 tmp1 =min(tmp1, abs(26+c-d) );
                TmpAns = min(TmpAns, tmp1);
            }
            //cout <<"S[k][i]  " <<S[i]<<" "<< c-97 +1 <<endl;
            //  cout<<"TmpAns "<<TmpAns<<endl;
            ans += TmpAns;
           //cout<<"ans "<<ans<<endl;
        }
  
        cout<<"Case #"<<k<<": "<<ans<<endl;
   
    }
}

int main()
{
    SovFunction();
    return 0;
}
