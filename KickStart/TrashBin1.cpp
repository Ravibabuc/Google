/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int SovFunction()
{
    
    
  
    int T=0;
    
   
    
    cin>>T;
    int *N = new int [T];
    vector<string > S;
    S.resize(T);
    
    for (int k =0;k< T;k++)
    {
        cin>>N[k];
        //int size=N[k];
      //  S[k].resize(size);
       // S ="";
        //char tmp[size];
        cin>>S[k];
        // = tmp;
       // cout <<"Hello1"<<endl;
    }
    
    for (int k =0;k< T;k++)
    {
        //cin>>N;
        //S = new char [N];
       // S ="";
       // cin>>S;
       int n = N[k];
         int Prev;
        long res=0;
   // cout <<"Hello2"<<endl;
        long  LefP[N[k]];
        //cout <<"Hello2a"<<endl;
        Prev = INT_MAX;
        for (int i =0;i< n;i++)
        {
           // cout <<"Hello2a1"<<endl;
            if (S[k][i]== '1')
            {
                Prev=i;
               LefP[i] = 0;
             //  cout <<"Hello2a2"<<endl;
            }
            if (S[k][i] == '0')
            {
               // cout <<"Hello2a3"<<endl;
                if (Prev < INT_MAX)
                LefP[i]  =  (i -Prev);
                else  LefP[i]  =  Prev;
                
            }
          //  cout <<"i"<<i<<endl;
        }
     //   cout <<"Hello2b"<<endl;
        long RighP[N[k]];
        Prev = INT_MAX;
        for (int i =N[k]-1;i>=0;i--)
        {
            if (S[k][i]== '1')
            {
               RighP[i] = 0;
               Prev=i;
            }
            if (S[k][i] == '0')
            {
                if (Prev < INT_MAX)
                    RighP[i]  =  (Prev-i);
                else
                    RighP[i]  =  Prev;
                
                
            }
        }
        
         for (int i =0;i< N[k];i++)
         {
             //cout<<"LefP[i] "<<LefP[i]<<endl;
            // cout<<"RighP[i] "<<RighP[i]<<endl;
            int tmp =min(LefP[i], RighP[i]);
            if (tmp == INT_MAX ) tmp=0;
             res = res + tmp;
         }
         //Case #1: 0
    //Case #2: 5
        cout<<"Case #"<<k+1<<": "<<res<<endl;
      //  cout<<"S "<<S<<endl;
        //cout<<"res "<<res<<endl;
        
       // T --;
        
    }

   
    return 0;
}

int main()
{
    //cout<<"Hello World";
    SovFunction();
    return 0;
}
