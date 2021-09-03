
#include <iostream>
#include<vector>
using namespace std;

int main()
{
  //vector<vector<int> > a= {{1, 2, 3},{ 4 ,5 ,6}, {7 , 8,9}};
    
//    vector<vector<int> > a= {{1, 2},{ 3 ,4}};

//vector<vector<int> > a= {{22, 1, 12, 17, 10},{ 8, 4, 24, 4, 21}, 
//{17, 22, 18, 11, 10}, {20, 3, 16, 19, 7}, {1, 3, 8, 19, 18}};
    
    int A=4;
    vector<vector<int> > b;
    
    
    int n=A;
  
    b.resize(n);
    
    for  (int i=0;i<n;i++)
    {
        b[i].resize(n);
    }
    int count =1;
    for (int i=0;i < n;i++)
    { 
      //  cout<<"coint ="<<count<<endl;
        for(int j= n-1; j>=n-i-1 ;j--)
        {
            cout<<"i ="<<i<<"j = "<<j<<endl;
             
            b[i][j]= count;
            count ++;
        }
        count=1;
    }
    
    for (int i=0;i < n;i++)
    {
       cout<<"["   ;
        for(int j= 0; j<n; j++)
        {
            cout <<b[i][j];
        }
        cout<<"]"   ;
        std::cout <<  std::endl;
        count=1;
    }
    return 0;
}
