#include<bits/stdc++.h>
using namespace std;

int swap(int * A, int * B);

int solve(vector<int> &A) 
{
    
    int n= A.size();
    vector <int> B;
    
    B.resize(n);
    
    int minimum =0;
    
  
   int count =0;
    for (int i = 0; i < n-1; i++)
    {
        
        minimum=i;
                    

        for(int j=i+1;j < n;j++)
        {
                   // cout <<"A[i]  "<<A[i] <<"  "<<A[j]<<endl;
                   

            if (A[j] < A[minimum])
            {
                minimum = j;
                cout <<"A[j]  "<<A[j]<<endl;
                                  
               
                
            }
        }
        B[count]= minimum;
        count ++;
        cout <<"A[minimum]  "<<A[minimum] <<"A[i]  "<<A[i]<<endl;

        //swap(&A[minimum], &A[i]);
        
        int temp =A[minimum];
        A[minimum]= A[i];
        A[i]= temp;
        
       
    }
    
   for(int i =0;i <n;i++)
    {
        cout <<" B[i] ="<<B[i]<<"  ";
    }
    cout <<endl;
   
    return 1;
}

int swap(int *A, int *B)
{
    int temp =*A;
    *A=*B;
    *B=temp;
}
 

int main()
{
    vector<int> A=  {18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605, 3903, 154, 293, 12383, 17422, 18717, 19719, 19896, 5448, 21727, 14772, 11539, 1870, 19913, 25668, 26300, 17036, 9895, 28704, 23812, 31323, 30334, 17674, 4665, 15142, 7712, 28254, 6869, 25548, 27645, 32663, 32758, 20038, 12860, 8724, 9742, 27530, 779, 12317, 3036};
    int B=3;
    int res = solve(A);
    if (res == 1)
        cout << "Yes arthamitic progress " << res;
    else
        cout << "No arthamitic progress";
    return 0;
}
 
