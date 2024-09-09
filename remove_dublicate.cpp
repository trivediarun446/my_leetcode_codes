#include<iostream>
#include<vector>
using namespace std ; 
class Solution 
{
public:
    int removeDuplicates(vector<int>& nums)
     {
// here I take k integer that is index for new array in which we remove all dublicate element or 
// contain only unique element 
// initial value of k is 1 state that the 0 th index of new array has always unique element 
        int k =1;

        // Here we run a loop to traverse all element in a array 
        for(int i=1;i<nums.size();i++)
        {
// This condition state that the value at privious element is not equal to the present element then 
// it will store on new array element 
            if(nums[i-1]!=nums[i])
            {
                nums[k]=nums[i];
                k++; /*for increasing the indec of new array after inserting the unique element */
            }
        
        if(nums.size()==0)
        {
            return 0 ;
        }
        else 
        return 1;
       }
    }
};
