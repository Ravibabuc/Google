
#include <iostream>
#include<vector>
using namespace std;

int main()
{
  //vector<vector<int> > A= {{1, 2, 3},{ 4 ,5 ,6}, {7 , 8,9}};
    
vector<vector<int> > A= {{1, 2},{ 3 ,4}};

//vector<vector<int> > A= {{22, 1, 12, 17, 10},{ 8, 4, 24, 4, 21}, 
//{17, 22, 18, 11, 10}, {20, 3, 16, 19, 7}, {1, 3, 8, 19, 18}};

 vector<vector<int> > b;
    
    
    int n=A.size();
    
    if(n==1)
    {
      ;//  return A;
    }
    
    b.resize((n*2)-1);
    for  (int i=0;i<((n*2)-1);i++)
    {
        b[i].resize(n);
    }

    int count=0;
        int ind=0;
   while(count <n)       
    { 
        int k=0;
        int i=0,j=0;
         ind=0;
        for (i=0,j=count;j >=0;)
        {
           
       
          b[count][ind]=A[i][j];
     
          j--;
          i++;
          k++;
          ind++;
          
        }
        for(int p=0;p< n-k;p++){
                b[count][ind]=0;
                ind ++;
            }
        
        count ++;
      
    }
      
   
   ind =0;
   int previous =1;
   while(count <=(n*2)-1)   
    { 
       // cout<<"count ="<<count<<endl;
        
        if (count + 1 ==(n*2)-1)
        {
                 // cout<<"count break ="<<count<<endl;

          ind=0;
        
          b[count][ind]= A[n-1][n-1];
          ind ++;
           for(int p=0;p< n-1;p++)
           {
                b[count][ind]=0;
                ind ++;
                
           }
            break;
        }
        
        int k=0;
        
        int i=previous;
        int j=n-1;
     //   cout<<"A[i][j] ="<<A[i][j]<<endl;
        ind =0;
        for (;j >=1 && i <n;)
        {
          //  cout<<"A[i][j] ="<<A[i][j]<<endl;
           
           b[count][ind]=A[i][j];
          // cout<<"A[i][j]ddd ="<<A[i][j]<<endl;
          j--;
          i++;
          k++;
          ind++;
          
        }
        
        for(int p=0;p< n-k;p++)
        {
             b[count][ind]=0;
             ind++;
        }
        
        previous++;
        count ++;
        //cout <<"previous ="<<previous<<endl;
    

      
    }
      
 for(int i =0;i<((n *2)-1); i++)
      {
          for(int j=0;j<n;j++)
          {
          
        //    cout<<"i ="<<i<<" j ="<<j<<endl;
              cout<<b[i][j]<<" ";
          }
          cout<<endl;
          
      }
 //   return b;
}
