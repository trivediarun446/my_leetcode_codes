#include<iostream>
#include<vector>
using namespace std ; 
class Solution {
public:
    // Optimal Approach : 
    // First of all make index variable with value 0 
    // Traverse the loop from i to nums.size()
    // Apply the condition in which we check the current element is non zero 
    // If the element is non zero then we push the value at nums[index] and increment the index
    // In list remaining element are zero 
    void moveZeroes(vector<int>& nums) 
    {
        int index = 0 ;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]!= 0)
            {
                nums[index] = nums[i] ;
                index ++ ; 
            }
            while (index < nums.size())
            {
                nums[index]= 0 ;
                index++ ;
            }
        }
    }
};

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
        return nums ;
}
    int main ()
    {
        vector<int> vec(10) ; 
        cout<<"enter the vector element"; 
        for(int i =0 ; i< vec.size(); i++)
        {
         cin>> vec[i];
        }
        cout<<"your array is this"<<endl ; 
        vec=moveZeroes(vec);
        for (int i = 0; i < 10; i++)
        {
            cout<<vec[i]<<endl;
        }
        
    }