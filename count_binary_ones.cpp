/************
Row with maximum number of ones
Problem Description
Given a binary sorted matrix A of size N x N. Find the row with the maximum number of 1.
NOTE:

    If two rows have the maximum number of 1 then return the row which has a lower index.
    Rows are numbered from top to bottom and columns are numbered from left to right.
    Assume 0-based indexing.
    Assume each row to be sorted by values.
    Expected time complexity is O(rows).
Problem Constraints
1 <= N <= 1000
0 <= A[i] <= 1
Input Format

The only argument given is the integer matrix A.
Output Format
Return the row with the maximum number of 1.
Example Input
Input 1:
 A = [   [0, 1, 1]
         [0, 0, 1]
         [0, 1, 1]   ]

Input 2:
 A = [   [0, 0, 0, 0]
         [0, 1, 1, 1]    ]
Example Output
Output 1:
 0
Output 2:
 1
Example Explanation
Explanation 1:
Row 0 has maximum number of 1s.
Explanation 2:
 Row 1 has maximum number of 1s
***********************/
#include <iostream>
#include<vector>
using namespace std;

int main()
{
   //vector<vector<int> > A= {{1, 2, 3},{ 4 ,5 ,6}, {7 , 8,9}};
    
   vector<vector<int> > A= {{0, 0, 1},{ 0 ,1,1 }, { 0 ,1,1 }};

  //vector<vector<int> > A= {{22, 1, 12, 17, 10},{ 8, 4, 24, 4, 21}, 
  //{17, 22, 18, 11, 10}, {20, 3, 16, 19, 7}, {1, 3, 8, 19, 18}};

 
    
    
    int n=A.size();
    
    if(n == 1)
    {
      if (A[0][0] == 1) return 1;
      else 0;
    }
   int  count=0;
    int row=0;
     
    for( int i=0,  j=n-1; i<n && j>=0;)       
    { 
       
        
         if (A[0][0] == 1)
         {
            row= 0; 
            break;
         }
        

        
        if (A[i][j] == 1)
        {
            row= i;

            j--;
            /*if (row == i)
            {
                count = n-j;
            }*/
            
        }
        if(A[i][j] ==0)
        {
        
            if(A[i][j+1] ==1)    
            {
               
            
                if( count < n-j)
                {
                    row =i;
                    count = n-j;
             
                }
                
            }
            i++;
        }
    }
   return row;
    
}
