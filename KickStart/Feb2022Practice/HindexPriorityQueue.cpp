#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>

using namespace std;

void removeSmaller(priority_queue<int, vector<int>, greater<int> >  &g, int x)
{
  //  priority_queue<int, vector<int>, greater<int> > g = gq;
    while (!g.empty() && g.top() <= x) {
        //cout<<"queue "<<g.top()<<endl;;
        g.pop();
    }
}

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
         priority_queue<int, vector<int>, greater<int> >  Que;
           int ans =1;
           cout<<"Case #"<<k+1<<":";
          
            for (int i=0;i<N[k];i++)
            {
                 removeSmaller(Que, ans);
                
               if (C[k][i]> ans)
               {
                   
                    Que.push(C[k][i]);
                    
               }
                if (Que.size()> ans)
                {
                    ans = ans +1;
                    cout<<" "<<ans;
                }
                else
                {
                    cout<<" "<<ans;
                }
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
