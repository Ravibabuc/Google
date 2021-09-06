#include <iostream>
#include<vector>
using namespace std;
int max(int a, int b);
int main()
{
  int n= 6;
  long count=0;
  
  /*for(int i=1;i<=n;i++)
  {
      int num=i;
      while(num)
      {
          if(num & 01)
          {
              count ++;
          }
          num= num >> 1;
         //  std::cout <<  "count=" <<count<< std::endl;
      }
  }*/
  long p=1;
  count=0;
  for (int i=0;i<30;i++)
  {
      long p1= p<< i;
      long p2 = p<<(i+1);
      
      cout << " P2= "<<p2<<" n "<<n<<endl;
      cout << " P1= "<<p1<<" n "<<n<<endl;
      
      count += ((n +1 )/p2 * p1) + max( (((n+1) % (p2)) - p1), 0);
      std::cout <<  "count=" <<count<< std::endl;
  }
  std::cout <<  "count=" <<count<< std::endl;
    
}

int max(int a, int b)
{
    
    cout <<"a ="<<a<<"  b "<<b<<endl;
    if (a> b) return a;
    else return b;
}
