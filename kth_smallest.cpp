#include<bits/stdc++.h>
using namespace std;

/*A = "scaler"
 B = 2*
 erscal */

int kthsmallest(const vector<int> &A, int B)
{


    //cout<<"hello0 "<<endl;
    int n=A.size();
    int count =0;
    vector <int> C;
    C.resize(n);
    for(int i =0;i< n;i++)
    {
        C[i]=A[i];
    }
    
    for(int i =0;i <n;i++)
    {
        int m_ind=i;
        for(int j=i+1;j <n;j++)
        {
            
            if(C[j] < C[m_ind])
            {
                 m_ind=j;
                
            }
        }
       
        // cout<<"count"<<count<<endl;
        
         int tmp =C[m_ind];
                 C[m_ind] =C[i];
                 C[i]=tmp;
                 count ++;
        
         if (count == B )
         {
             break;
         }
        
    }
    for(int i =0;i<n;i++)
    {
        cout<<C[i]<<" "  ;
    }
    cout<<endl;
      
      return C[B-1];
}




int main()
{
    vector<int> A= {8, 16, 80, 55, 32, 8, 38, 40, 65, 18, 15, 45, 50, 38, 54, 52, 23, 74, 81, 42, 28, 16, 66, 35, 91, 36, 44, 9, 85, 58, 59, 49, 75, 20, 87, 60, 17, 11, 39, 62, 20, 17, 46, 26, 81, 92 };
    
    int x =kthsmallest(A, 9);
   cout <<"x ="<<x<<endl;
}
 
 
