
#include <iostream>
#include<vector>
using namespace std;

int main()
{
 // vector<vector<int> > a= {{1, 2, 3},{ 4 ,5 ,6}, {7 , 8,9}};
    
//    vector<vector<int> > a= {{1, 2},{ 3 ,4}};

//vector<vector<int> > a= {{22, 1, 12, 17, 10},{ 8, 4, 24, 4, 21}, 
//{17, 22, 18, 11, 10}, {20, 3, 16, 19, 7}, {1, 3, 8, 19, 18}};
    
    int A=3;
    
    int k=0;/* starting row */
    int l=0 ;/*starting column column */
    
    int m=A; /*ending row */
    int n=A; /*ending column  */
    
    
    vector<vector<int> > b;
    
    b.resize(n);
    for  (int i=0;i<n;i++)
    {
        b[i].resize(n);
    }

    if (n==1)
    {
        b[0][0]=1;
        return 0;
    }
    
  
    int count=1;
    while(k < m && l < n)       
    {
        for (int i =l;i < n;i++)
        {
            //cout <<"hello "<<endl;
          b[k][i]= count;
          //cout<<b[k][i]<<" ";
          count ++ ;    
          //cout <<"hello1 "<<endl;
        }
        k++;
   //     cout<<"i ="<<i <<"j = "<<j<<endl;
        for(int i =k ;i < m;i++)
        {
         b[i][n-1]= count;   
         //cout<<b[i][n-1]<<" ";
         count ++;
                 //  cout <<"hello2 "<<endl;

         
        }
        n--;
        if(k < m)
        {
            for(int i= n-1;i >=l;i-- )
            {
             b[m-1][i]= count;   
           //  cout<<b[m-1][i]<<" ";
             count ++;
            }
                  m--;
        }
  
        if(l < n)
        {
            for(int i= m-1;i >=k;i-- )
            {
             b[i][l]= count;   
             //cout<<b[i][l]<<" ";
             count ++;
            }
            l++;
        }
    }    
        
        
        
    for(int p =0;p <A;p++ )
    {
        cout<<"[";
        for (int q=0;q< A;q++)        
        {
            cout<<b[p][q]<<" ";
        }
        cout<<"]"<<endl;
        
    }
}
