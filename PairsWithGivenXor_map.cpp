#include <iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A, int B);

int main()
{
    
   vector<int> A={3, 6, 8, 10, 15, 50};
  // vector<int> B={2, 3, 1, 2};
   int B=5;
   
   int value= solve(A, B);
   cout <<"value ="<<value<<endl;
}


int solve(vector<int> &A, int B) 
{
    int count=0;
    
     map<int, int>::iterator itr, itr2;
   unordered_set<int> Map1;
   map<int, int> Map2;
   int n =A.size();
    
    /*for(int i=0;i<n;i++)
    {
        
        Map1.insert(A[i], (B ^ A[i]));
    }*/
    for(int i=0;i<n;i++)
    {
           // cout <<"A[i] "<<A[i]<<"  "<<"A[j]  "<<A[j]<<endl;
            if (Map1.find(A[i] ^ B) != Map1.end())
            {
              count ++;
            }
            
            Map1.insert(A[i]);
          
          
   }
   //cout<<"count = "<<count<<endl;
    
    return count;
    
}
