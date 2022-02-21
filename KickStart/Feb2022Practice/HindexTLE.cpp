#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>

using namespace std;

int SovFunction()
{
  
    int T=0;
    cin>>T;
   
    
    vector<int > N;
    N.resize(T);
    vector<vector<int >> C;
    C.resize(T);
    for (int k =0;k< T;k++)
    {
        cin>>N[k];
        C[k].resize(N[k]);
        for (int i =0;i<N[k];i++)
        {
            
            cin>> C[k][i];
            
        }
    }
    
  for (int k =0;k< T;k++)
   {     
       
        int ans =1;
           cout<<"Case #"<<k+1<<":";
           cout<<" "<<ans;
            for (int i=1;i<N[k];i++)
            {
               
                int cnt=0;
                int found=0;
                for (int j =0;j<= i;j++)
                {
                   
                    if(C[k][j] > ans)
                    {
                        cnt ++;
                    }
                    if (cnt > ans)
                    {
                        ans = ans+1;
                        cnt =0;
                         cout<<" ";
                        cout<<ans;
                        found =1;
                        break;
                    }
                    
                    
                }
                if (found==0)
                {
                    cout<<" ";
                   cout<<ans;
                }
                //cout<<" ";
                //cout<<C[k][i];
            }
           cout<<endl;
     
 }

   
    return 0;
}

int main()
{
    SovFunction();
    return 0;
}
