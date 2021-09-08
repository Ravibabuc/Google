// C++ program to find Noble elements
// in an array.
#include<bits/stdc++.h>
using namespace std;

int nobleInteger(vector<int> &A)
{
    int n= A.size();
    
    sort(A.begin(), A.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
            continue;
 
        if (A[i] == n - i - 1)
            return A[i];
    }
    if (A[n - 1] == 0)
        return A[n - 1];
    return -1;
}
 

int main()
{
    vector<int> arr= {10, 3, 20, 40, 2};
    int res = nobleInteger(arr);
    if (res != -1)
        cout << "The noble integer is " << res;
    else
        cout << "No Noble Integer Found";
    return 0;
}
 
