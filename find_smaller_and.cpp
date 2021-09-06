#include <iostream>
#include<vector>
using namespace std;
int solve(vector<int> &A);
int main()
{
  int n= 6;
  vector <int> A = {1, 2, 3, 4, 5, 6};
  int count = solve(A);
  std::cout <<  count << std::endl;

}

int solve(vector<int> &A) {
    
       int count=0;
   for(int  i=0;i< A.size();i++)
   {
       int smaller=0;
       int bigger=0;

      for(int j=0; j<  A.size();j++)
      {
         if (A[i] > A[j])
          {
             bigger= 1;
          }
          if (A[i] < A[j])
          {
              smaller=1;
          }
          if (smaller >= 1 && bigger >=1 )
          {
              count ++;
              break;
          }
      }
          
      
   }
  return count;
}

