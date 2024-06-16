// It is leet code easy problem In this code we remove the element from an array 
#include<vector>
#include<iostream>
using namespace std ;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k =0;
        for(int i =0;i<nums.size();i++)
        {
            if (nums[i]!=val)
            {
               nums[k]=nums[i];
               k++;
            }
           
        }
        return k ;
    }
};