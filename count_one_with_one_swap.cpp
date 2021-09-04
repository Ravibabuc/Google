#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    string A="01";
    int count =0;
    int previous=0;
    int temp=0;
    for (int i=0;i<A.size();i++)
    {
     
       cout <<" "  <<A[i]<<"  ";
        if(A[i]=='1')
        {
           cout <<" ffffff   "  <<A[i]<<"  "<<endl;
                count ++;
                temp ++;
        }
        
        else 
        {
            cout <<" previous "  <<previous<<"  " <<endl;
            cout <<" temp dddddd "  <<temp<<"  "<<endl;
         
          if(previous < temp)
            {
                previous = temp;
            }
            
            temp=0;
        }
         if(previous < temp)
            {
                previous = temp;
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
        
            
    // Counting cumulative 1's from left
    for (int i = 1; i < n; i++) {
        if (A[i] == '1')
            left[i] = left[i - 1] + 1;
 
        // If 0 then start new cumulative
        // one from that i
        else
            left[i] = 0;
    }
 
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] == '1')
            right[i] = right[i + 1] + 1;
 
        else
            right[i] = 0;
    }
 
 
    for (int i = 1; i < n - 1; i++) {
        // perform step 3 of the approach
        if (A[i] == '0') {
 
             
 
            int sum = left[i - 1] + right[i + 1];
   cout <<"sum kk="<<sum<<endl;
    cout <<"previous kk ="<<previous<<endl;
            if (sum < count)
            {
               if (previous< (sum+1))
               {
                   previous=sum +1;
                   
               }
               cout <<"sum ff ="<<sum<<endl;
    cout <<"previous ff ="<<previous<<endl;
            }
 
            else
            {
                cout <<"sum hh="<<sum<<endl;
    cout <<"previous hh="<<previous<<endl;
   
                if (previous< sum);
               {
                   previous=sum ;
                   
               }
            }
 
        }
    }
 
    
    cout <<"previous  dd   "<<previous<<endl;
    if (n <=2)
    {previous=count;}
    return previous;
} 
        

