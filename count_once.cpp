
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    string A="111011101";
    int count =0;
    int ans =0;
    int previous=0;
    for (int i=0;i<A.size();i++)
    {
        if( i ==0)
        {
            if(A[i]=='1')
            {
                count ++;
            }
        }
        if(A[i]=='1' && A[i-1])
        {
            count ++;
            
        }
        else
        {
            if(previous < count)
            {
                previous = count;
            }
            count =0;
        }
        if(previous < count)
        {
                previous = count;
        }
    }
    cout <<"count ="<<previous<<endl;
    return previous;
}
