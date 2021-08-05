/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string S;

    int k;
    int n;
    int NoOfiP;
    int case_n =0;
    cout<<"input NoOfiP value\n";
    cin>>NoOfiP;
    while(NoOfiP>0)
    {
        cout<<"input  N and  K value\n";
        cin >>n>>k;
        cout<<"input String\n";
        cin >>S;
        
        int x =0;
        int numberOfoperations =0;
        cout <<"size act="<<S.size()<<endl;

        cout <<"size ="<<S.size()/2<<endl;
        if (S.size()/2 > 0 )
        {
            for (int i =0;i <= (S.size()/2 -1);i++)
            {
    
                 cout<<"S[i] ="<<S[i] <<endl;
                 cout<<"S[(S.size()-1)-i+1] ="<<S[S.size()-1-(i+1)+1] <<endl;
                 
                 if ( S[i] != S[S.size()-1-(i+1)+1] )
                 {
                  
                    cout<< "x = "<<x<<endl;
                    x++;
                    
                 }
            
            }
        }
        case_n ++;
    
        if (case_n)    
        {
            if(x > k)
            {
             numberOfoperations =0;
             std::cout << "case #"<<case_n<< "  = " <<numberOfoperations << std::endl;
            }
            else if(k > x)
            {
             numberOfoperations =k-x;
             std::cout << "case #"<<case_n<< "  = " <<numberOfoperations << std::endl;
            }
            
            else 
            {
             numberOfoperations =x-k;
             std::cout << "case #"<<case_n<< "  = " <<numberOfoperations << std::endl;
            }
        }
       
        NoOfiP --;
    }  
         
    return 0;
}





