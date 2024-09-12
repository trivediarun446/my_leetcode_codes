#include<iostream>
#include<vector>
using namespace std ; 

vector <int> moveZeroes(vector<int>& nums)
{
        vector<int> vec ;
        // int count =0 ; 
        // Aproach :- First of all store the non zero element in an new vector . then after store the zero in that new vector 
        for(int i =0 ;i< nums.size() ; i++)
        {
            // condition for checking non zero element and store it into the new vector 
         if(nums[i]!= 0 )
         {
            vec.push_back(nums[i]);
            // count++ ;
         }

        }
        // Now give the all non zero element from new element to the nums 
        for(int i = 0 ; i<vec.size(); i++)
        {
            nums[i]= vec[i];
            
        }
        // jaha hamara non zero element bhar jye ge uske bad hm old vector ke size tk sare value ko zero kar denge          

        for(int i = vec.size(); i< nums.size() ; i++)
        {
            nums[i]=0 ;
        }
}
    int main ()
    {
        vector<int> vec ; 
        cout<<"enter the vector element"<<endl ; 
        for(int i =0 ; i< vec.size(); i++)
        {
         cin>> vec[i];
        }
        moveZeroes(vec);
    }