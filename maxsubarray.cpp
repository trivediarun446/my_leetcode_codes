#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm> 
#include<string>
class Solution {
public:
// IN this problem we are using the preffix and suffix sum problem 
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        // Here we take INT_MIn because INT_MIN is the smallest integers 
        int max_value=INT_MIN ; 

        int prefix=0 ;
        for(int i=0;i<n;i++)
        {
            // Here we will calculate the preffix sum 
            prefix+=nums[i];
            // Then we compair the max_value and prefix sum for getting maximum value 
            max_value=max(max_value , prefix);
            
            // KADANE'S Algorithm 
            if(prefix< 0)
            {
                prefix=0;
            }
        }
        return max_value;
    }
};