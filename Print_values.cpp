/******************************************************************************
Given a positive integer A, return an array of strings with all the integers from 1 to N. But for multiples of 3 the array should have “Fizz” instead of the number. For the multiples of 5, the array should have “Buzz” instead of the number. For numbers which are multiple of 3 and 5 both, the array should have "FizzBuzz" instead of the number.

Look at the example for more details.

Example Input

Input 1:

 A = 5



Example Output

Output 1:

 [1 2 Fizz 4 Buzz]



Example Explanation

Explanation 1:

 3 is divisible by 3 so it is replaced by "Fizz".
 Similarly, 5 is divisible by 5 so it is replaced by "Buzz".
*******************************************************************************/

#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define R 4
#define C 4
using namespace std;

int main()
{
    vector<string> A;
    int n =15;
    A.resize(n);
    
    //cout<<"hello0"<<endl;
    int j=1;
   for (int i =0;i<15;i++)
    {
                   cout<<"i "<<i<<" j  "<<j<<endl;

       if((j) % 3 ==0)
       {
       //    cout<<"hello1"<<endl;
          
           A[i]= "Fizz";
           
           if((j) % 5 ==0)
            {
           //cout<<"hello2"<<endl;
                A[i]=A[i]+ "Buzz";
            }
       }
       else if((j) % 5 ==0)
       {
          // cout<<"hello2"<<endl;
           A[i]= "Buzz";
       }
       else
       {
           //cout<<"hello3"<<endl;
            A[i] =to_string(j);
       }
       j++;
       
    }
 
 //cout<<"hello4"<<endl;
    for (int i =0;i< A.size();i++)
    {
     //    cout<<"hello5"<<endl;
         std::cout << "A[i] = " <<A[i]<< std::endl;
    }
    
}
