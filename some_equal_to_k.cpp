#include <bits/stdc++.h>
#include<vector>
using namespace std;
 
void subArraySum(vector <int> &A, int n, int sum)
{
    int minEle = INT_MAX;
    

 
    vector <int> C;

    for (int i = 0; i < n; i++)
        minEle = min(A[i], minEle);
    int curr_sum = A[0] + abs(minEle), start = 0, i;
 
    int targetSum = sum;
 
    for (i = 1; i <= n; i++) {
 
        while (curr_sum - (i - start) * abs(minEle) > targetSum && start < i) {
            curr_sum = curr_sum - A[start] - abs(minEle);
            start++;
        }

        
        if (curr_sum - (i - start) * abs(minEle) == targetSum) {
          //  cout << "start =" <<i-start<<endl;
            //cout << "i - 1 =" <<i - 1<<endl;
            

           // int z=i-start;
            C.resize(i-start);
            
            int count =0;
            for (int q= start ;q< i;q++)
            {
                C[count]= A[q];
                count ++;
            }
           
                    //     cout<<"hello3bb"<<endl;
                         
             for (int q= 0 ;q< C.size();q++)
            {
                cout<<"C[Q]= "<<C[q]<<endl;
            }

            return;
        }

        if (i < n) {
            curr_sum = curr_sum + A[i] + abs(minEle);
        }
    }
    C.resize(1);
    cout << "No subarray found";
    C[0]= -1;
   // return C;
}
 

int main()
{
    vector<int> A= {  23, 50, 44, 6, 39, 15, 44, 27, 47, 29, 30, 44, 28, 42, 7, 32, 16, 40, 8, 7, 5, 48, 48, 16, 9, 5, 50, 16, 18, 9, 21, 26, 48, 37, 27, 7, 5, 29, 24, 28, 10, 44, 21, 1, 48, 15, 31, 41, 42, 23, 4, 32, 40, 40, 27, 20, 29, 42, 25, 18, 37, 43, 13, 30, 42, 24, 17, 42, 14, 42, 43, 36, 31, 29, 24, 24, 8, 3, 12, 34, 14, 6 };
    
    cout <<"Hello"<<endl;
    int n = A.size();
 
    int sum = 62;
 
    subArraySum(A, n, sum);
 
    return 0;
}
