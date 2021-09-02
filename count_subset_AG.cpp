#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    string s="ABCGAG";
    int count =0;
    int ans =0;
    for (int i=s.size();i>=0;i--)
    {
        if(s[i]=='G')
        {
            count ++;
        }
        if(s[i]=='A')
        {
            ans = ans + count;
        }
    }
    cout <<"ans ="<<ans<<endl;
    return ans;
}
