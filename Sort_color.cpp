#include<bits/stdc++.h>
using namespace std;

/*A = "scaler"
 B = 2*
 erscal */

vector<int>  solve(vector<int> &A) 
{
    //cout<<"hello0 "<<endl;
        int n=A.size();
        map<int, int> Mapint;
        map<int, int>::iterator itr, itr2;
        
        for(int i =0 ;i < n ;i ++)
        {
        //    cout<<"hello1 "<<endl;
            itr = Mapint.find(A[i]);
      //      cout<<"hello2 "<<endl;
            if( itr!= Mapint.end())
            {
                itr -> second ++;
            }
            // Mapint.insert(A[i]);
             Mapint.insert (pair<int, int>(A[i], 1 ));
        }
        
        itr= Mapint.find(0) ;
      
        //cout<<"itr->second"<<itr->second<<endl;
        int j=0;
        while(itr->second)
        {
            A[j]=0;
            itr->second =  itr->second-1 ;
            j++;
        }
        
         itr= Mapint.find(1) ;
      
      //  cout<<"itr->second"<<itr->second<<endl;
      //  int j=0;
        while(itr->second)
        {
            A[j]=1;
            itr->second =  itr->second-1 ;
            j++;
        }
     itr= Mapint.find(2) ;
      
        //cout<<"itr->second"<<itr->second<<endl;
      //  int j=0;
        while(itr->second)
        {
            A[j]=2;
            itr->second =  itr->second-1 ;
            j++;
        }
        
      
     /* for( int i =0;i<n;i++)
      {
          cout<<" Ai "<<A[i]<<endl;
      }*/
      
      return A;
}




int main()
{
    vector<int> A= {0,1, 1, 1,0, 2, 2,0};
    solve(A);
   // cout <<"S ="<<S<<endl;
}
 
 
