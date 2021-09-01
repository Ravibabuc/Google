int n=A.size();
  
    int count=0;
  
    int previous=-1;
    for (int i=0;i <n;i++) 
    {
        
        if (A[i] % 2==0)
        {
        //    cout<<"even i ="<<i<<endl;
          //  even=1;
            previous = 0;
        }
        else
        {
      //      cout<<"odd i ="<<i<<endl;
            previous = 1;
        }
        if (i >0 )
        {
    //        cout<<"previous  ="<<previous<<endl;
            if(previous == 0 && A[i-1] %2 ==1)
            {
  //              cout<<"value dd ="<<A[i]<<" "<<A[i-1]<< endl;
                count ++;
                
            }
            else if (previous == 1 && A[i-1] %2 ==0)
            {
          //     cout<<"value ff ="<<A[i]<<" "<<A[i-1]<< endl;
                count ++;
            }
            
        }   
        else
        {
            //cout<<"else"<<endl;
            count ++;
        }
        
    }   
    
    std::cout << "count = " <<count<< std::endl;
    return count;
}
