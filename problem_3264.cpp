// You are given an integer array nums, an integer k, and an integer multiplier.

// You need to perform k operations on nums. In each operation:

// Find the minimum value x in nums. If there are multiple occurrences of the minimum value, select the one that appears first.
// Replace the selected minimum value x with x * multiplier.
// Return an integer array denoting the final state of nums after performing all k operations.

 

// Example 1:

// Input: nums = [2,1,3,5,6], k = 5, multiplier = 2

// Output: [8,4,6,5,6]

// Explanation:

// Operation	Result
// After operation 1	[2, 2, 3, 5, 6]
// After operation 2	[4, 2, 3, 5, 6]
// After operation 3	[4, 4, 3, 5, 6]
// After operation 4	[4, 4, 6, 5, 6]
// After operation 5	[8, 4, 6, 5, 6]
// Example 2:

// Input: nums = [1,2], k = 3, multiplier = 4

// Output: [16,8]

// Explanation:

// Operation	Result
// After operation 1	[4, 2]
// After operation 2	[4, 8]
// After operation 3	[16, 8]




// Approach for the solution 

// 1) first of all we create a findMin function for finding the position of min value in the array and return that value 
// 2) Then run a loop till k is not equal to the 0 
// 3) In this loop we call findMin function and store the position of mini value . 
// 4) Then we perform a mathmatical opertaion into the mini value give to the nums[min] 
// 5) Then decrease the value of k 
// 6) return the nums array  

#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std ; 
class Solution {
public:
    int FindMIn( vector<int> &nums) 
    {
        int val = 0 ; 
        int mini = nums[0] ; 
        for (int i = 1; i < nums.size(); i++)
        {
            if( mini > nums[i])
            {
                mini = nums[i] ; 
                val = i ; 
            }
        }
        return val ; 
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int mini = 0 ; 
        while ( k > 0)
        {
         mini = FindMIn( nums) ; 
         nums[mini] = multiplier * nums[mini] ; 
         k-- ; 
        }
        return nums ; 
    }
};