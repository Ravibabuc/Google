#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    string A="11101110111111011111";
    int count =0;
    int previous=0;
    int temp=0;
    for (int i=0;i<A.size();i++)
    {
     
     //  cout <<" "  <<A[i]<<"  ";
        if(A[i]=='1')
        {
          //  cout <<" "  <<A[i]<<"  ";
                count ++;
                temp ++;
        }
        
        else 
        {
         
          if(previous < temp)
            {
                previous = temp;
            }
            
            temp=0;
        }
    } 
    
    cout <<"previous ="<<previous<<endl;
    cout <<"count ="<<count<<endl;
    
    int n =A.size();
    
    int left[n];
    int right[n];
    
     if (A[0] == '1')
        left[0] = 1;
    else
        left[0] = 0;
 
    if (A[n - 1] == '1')
        right[n - 1] = 1;
    else
        right[n - 1] = 0;        
        
            
        
        

    return previous;
}
