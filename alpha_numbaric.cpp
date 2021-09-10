#include<bits/stdc++.h>
using namespace std;

/*A = "scaler"
 B = 2*
 erscal */

int solve(string A) 
{
    int n=A.size();
        for(int i =0 ;i < n ;i ++)
        {
          if(A[i] >= 'A' && A[i]<='Z')
          {
               continue;
          }
          else if(A[i] >= 'a' && A[i]<='z')
          {
               continue;
          }
          else if(A[i] >= '0' && A[i]<='9')
          {
              continue;
          }
          else
          {
             // cout<<A[i]<<endl;
              return 0;
          }
        }
      
      return 1;
}




int main()
{
    string S= "Scaler202#";
    if(solve (S) ==1)
    {
        cout <<" it is Alpha number\n";
    }
    else
    {
        cout <<" not Alpha numaric\n";
    }
    cout <<"S ="<<S<<endl;
}
 
 
