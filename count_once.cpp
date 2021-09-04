#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    string A="11101110111111011111";
    int count =0;
    int ans =0;
    int previous=0;
    int cz=0;
    for (int i=0;i<A.size();i++)
    {
      
        if(A[i]=='0')
        {
                count =0;
        }
        
        else 
        {
         
         count ++;
          if(previous < count)
            {
                previous = count;
            }
            
            
        }
    } 
    
    cout <<"count ="<<previous<<endl;
    return previous;
}
