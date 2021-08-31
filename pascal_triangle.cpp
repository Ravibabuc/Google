
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    int n =5;    
        vector<vector<int> > b;
        b.resize(n);
        
     for  (int i=0;i<n;i++)
    {
        b[i].resize(n);
    }
    
    for( int i=0;  i<n;i++)       
    { 
        int k=i+1;
        for(int j=0;j<n;j++)
        {
            //cout<<"i ="<<i<<" j ="<<j<<endl;
                 if(j==0 )
                  {
                    b[i][j]=1;     
                  }
                  else if(i>0)
                  {
                    b[i][j]=b[i-1][j-1] + b[i-1][j];
                    
                  }
                  else if(i==0 && j >0)
                  {
                    b[i][j]=0;
                    
                  }
                   
                 
             
        }
       
    }
    
      for(int i =0;i<n; i++)
      {
          for(int j=0;j<n;j++)
          {
          
         //   cout<<"i ="<<i<<" j ="<<j<<endl;
              cout<<b[i][j]<<" ";
          }
          cout<<endl;
          
      }
        
   
}
