#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int SovFunction()
{
  
    int T=0;
    cin>>T;
    
    vector<string > S;
    S.resize(T);
    for (int k =0;k< T;k++)
    {
        cin>>S[k];
         
    }
    
    for (int k =0;k< T;k++)
    {
        //cout <<"string "<<S[k].substr(S[k].length()-1, 1)<<endl;
        
        //if ((S[k].substr(S[k].length()-1) == "a")) 
      //  {
         //   cout<<"Case #"<<k+1<<": "<<S[k]<<"  is ruled by Bob."<<endl;
      //  }
    if ((S[k].substr(S[k].length()-1) == "A") ||  (S[k].substr(S[k].length()-1) == "E") ||     (S[k].substr(S[k].length()-1) == "I") || 
       (S[k].substr(S[k].length()-1) == "O") || (S[k].substr(S[k].length()-1 )== "U") || (S[k].substr(S[k].length()-1) == "a") ||  (S[k].substr(S[k].length()-1) == "e") ||     (S[k].substr(S[k].length()-1) == "i") || 
        ((S[k].substr(S[k].length()-1) == "o") || (S[k].substr(S[k].length()-1) == "u")))
       {
            cout<<"Case #"<<k+1<<": "<<S[k]<<" is ruled by Alice."<<endl;
        }
        else if ( (S[k].substr(S[k].length()-1) == "Y")  ||   (S[k].substr(S[k].length()-1) == "y")) 
        {
            cout<<"Case #"<<k+1<<": "<<S[k]<<" is ruled by nobody."<<endl;
        }
        else
        {
            cout<<"Case #"<<k+1<<": "<<S[k]<<" is ruled by Bob."<<endl;
        }
    }

   
    return 0;
}

int main()
{
    SovFunction();
    return 0;
}
