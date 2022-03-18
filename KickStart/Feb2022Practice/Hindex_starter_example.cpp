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
    int  N;
    vector<int > C;
    cin>>N;
    C.resize(N);
	for (int i =0;i<N;i++)
    {
        cin>> C[i];
    }
    priority_queue<int, vector<int>, greater<int> >  Que;
    int ans =1;
    for (int i=0;i<N;i++)
    {
    	 removeSmaller(Que, ans);
         if (C[i]> ans)
         {
               Que.push(C[i]);
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
    return 0;
}

int main()
{
	int T=0;
    cin>>T;
    for(int i =1;i<=T;i++)
	{
		
		 cout<<"Case #"<<i<<":";
		 SovFunction();
	}
    return 0;
}
