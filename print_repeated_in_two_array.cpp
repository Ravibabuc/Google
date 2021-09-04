#include <iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    
   vector<int> A={1, 2, 2, 1};
   vector<int> B={2, 3, 1, 2};
       map<int, int>::iterator itr, itr2;
   map<int, int> Map1;
   map<int, int> Map2;
   for(int i =0;i<A.size();i++)
   {
       
        
      itr = Map1.find(A[i]);

      if (itr != Map1.end())
      {
          
            itr->second =  itr->second +1;
          //  cout <<" map   " << Map1.find(A[i])->second<<endl;
      }
   
     //  c = c +1;
      else
      { 
       //cout <<" map   " << Map1.find(A[i])->second<<endl;
       Map1.insert (pair<int, int>(A[i], 1 ));
      }
       
   } 
       for(int i =0;i<B.size();i++)
   {
       
        
      itr = Map2.find(B[i]);

      if (itr != Map2.end())
      {
          
            itr->second =  itr->second +1;
          //  cout <<" map   " << Map2.find(B[i])->second<<endl;
      }
   
     //  c = c +1;
      else
      { 
       //cout <<" map   " << Map2.find(B[i])->second<<endl;
       Map2.insert (pair<int, int>(B[i], 1 ));
      } 
       
   }
       
       
     vector <int> C;
    // C.resize(10);
   
   int count=0;
   for (itr = Map1.begin(); itr != Map1.end(); ++itr) {
      //  cout << '\t' << itr->first
        //     << '\t' << itr->second << '\n';
             
      itr2=Map2.find(itr->first);
      if (itr2 != Map2.end())
      {
          if(itr2 -> second == itr->second)
          {
             for(int j=0;j < itr2 -> second;j++)
             {
                 C.resize(count+1);
              C[count]=itr2->first;
              count ++;
             }
          }
          else if(itr2 -> second < itr->second)
          {
             for(int j=0;j < itr2 -> second;j++)
             {
                 C.resize(count+1);
              C[count]=itr2->first;
              count ++;
             }
          }
           else if(itr2 -> second > itr->second)
          {
             for(int j=0;j < itr -> second;j++)
             {
                 C.resize(count+1);
              C[count]=itr->first;
              count ++;
             }
          }
      }
             
             
    }
   // for (itr = Map2.begin(); itr != Map2.end(); ++itr) {
     //   cout << '\t' << itr->first
       //      << '\t' << itr->second << '\n';
    //}
   
   for(int j =0;j<C.size();j++)
   {
       cout <<"C "<<C[j]<<endl;
   }
   
}


/*vector<int> solve(vector<int> &A, vector<int> &B) {
    
}*/
