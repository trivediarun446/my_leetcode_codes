// Programe to check the duplicate element is present or not in the vector 


// Approach 
// >>> First of we make a unordered_map 
// >>> Then we store the vectore element as key in the hash table and count the frequency of the element as value 
// >>> Then we check if the  value is more than and equal to 2 .
// >>> If key is more than and equal to 2 than the return true and else return false 
#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std ; 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map ; 
        for(int i =0 ;i<nums.size();i++)
        {
            map[nums[i]]++ ;
        }
        for(auto x : map)
        {
            if(x.second>= 2 )
            {
                return 1 ;
            }
        }
        return 0 ; 
    }
};