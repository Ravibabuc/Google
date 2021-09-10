#include<bits/stdc++.h>
using namespace std;



string solve(string A) 
{
    
    int n= A.size();
    
    
   int count =0;
    for (int i = 0, j= n-1; i<j; i++, j--)
    {
       // cout <<"A ="<<A[i]<<endl;
       
      /*  if(j ==n-1 )
        {
            if (A[j]==' ')
            {
              for (int k=j; ;k--)
              {
                   if (A[j]==' ')
                   {
                    j--; 
                    count ++;
                   }
                   else break;
              }
            }
        }*/
       char temp =A[i];
       A[i]= A[j];
       A[j]=temp;
       
       //cout <<"A ="<<A[i]<<endl;
       
    }
//    cout <<"A =" <<A<<endl;
    int start =0;
    for(int i =0;i <n;i++)
    {
         
        if(A[i]==' ')
        {
            
           
            
           int  m=i;
            
          //  cout <<" m ="<<m<<"start "<<start<<endl;
            for(int p = start,  q= m-1; p < q;p++, q--)
            {
                 char temp =A[p];
                   A[p]= A[q];
                   A[q]=temp;
                
            }
           // cout <<"A =" <<A<<endl;
             start =i+1;
        }
        
        
            if (i == n-1)
            {
                 int  m=n;
                for(int p = start,  q= m-1; p < q;p++, q--)
                {
                     char temp =A[p];
                       A[p]= A[q];
                       A[q]=temp;
                    
                }
                
                
            }
        
        
      /*    "blue is sky the"
      the sky is blue */  
        
    }
    char *B;
    B =new char[n];
    int j=0;
    for (int i =0;i < n;i++)
    {
       
         
          if(i==0)
          {
           while(1)
           {
            if(A[i] == ' ')
            {
             i++;
            }
            else break;
           }
          }
          
          if (A[i] == ' ' )
          {
              count ++;
          }
          else
          {
              count =0;
          }
          if(count >1)
          {
              i += count-1;
          }
        B[j]= A[i]; 
        j++;
        
    }
    B[j] ='\0';
    
    cout<<" count ="<<count<<endl;
    
    cout <<"B =" <<B<<endl;

   return A;
}


int main()
{
    string S="crulgzfkif gg ombt vemmoxrgf qoddptokkz op xdq hv ";
    solve(S);
    cout <<"S ="<<S<<endl;
}
 
 
