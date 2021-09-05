#include <iostream>
#include<vector>
#include<map>
using namespace std;
int solve(vector<int> &A, int B);

int main()
{
    
   vector<int> A={5, 4, 10, 15, 7, 6};
  // vector<int> B={2, 3, 1, 2};
   int B=5;
   
   int value= solve(A, B);
   cout <<"value ="<<value<<endl;
}


int solve(vector<int> &A, int B) 
{
    int count=0;
    
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
           // cout <<"A[i] "<<A[i]<<"  "<<"A[j]  "<<A[j]<<endl;
            if ((A[i] ^ A[j]) == B)
            {
               cout <<"A[i] "<<A[i]<<"  "<<"A[j]  "<<A[j]<<endl;
                count ++;
            }
        }
    }
    return count;
    
}
