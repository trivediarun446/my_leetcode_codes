// This is the programe for calculating maximum number of consiquetive one in array 

#include<iostream>
#include<vector>
using namespace std ;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0 ; 
        int max_one=-1; 
        // Treverse a vector 
        for(int i =0 ; i<nums.size(); i++)
        {
            // check element is one or not if it is one then count will plus - plus 
          if(nums[i]==1)
          {
            count ++;
          }
        //   then we check the value count is maximum or not and if we will find the element is zero then we count will zero 
          else {
          max_one=max(max_one , count);
          count=0 ;
          }

        }
        // after calculating finally check the maximum count 
        max_one=max(max_one,count);
        return max_one ;
    }
};