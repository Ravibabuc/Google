#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) 
{
    
    int n= A.size();
    
    sort(A.begin(), A.end());

    int differ=abs(A[0] -A[1]);
    int found=0;
    for (int i = 1; i < n-1 ; i++)
    {
        //cout <<"(A[i] - A[i + 1]) "<<(A[i] - A[i + 1])<<endl;
        //cout <<"differ "<<differ<<endl;
        
     //   int differ1= abs(A[i] - A[i + 1]);
        if (abs(A[i] - A[i + 1])== differ)
        {
            differ=abs(A[i] - A[i + 1]);
           // found=1;   
            continue;
        }
        else
        {
            
         return 0;
        }
    }
   
    return 1;
}
 

int main()
{
    vector<int> A=  {3, 5, 1};
    int res = solve(A);
    if (res == 1)
        cout << "Yes arthamitic progress " << res;
    else
        cout << "No arthamitic progress";
    return 0;
}
 
