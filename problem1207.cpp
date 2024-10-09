#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector> 
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 // Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
// Example 2:

// Input: arr = [1,2]
// Output: false
// Example 3:

// Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]s
// Output: true


using namespace std ; 
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // Approach 
        // first of all declare a unordered set and map 
        // store the all array element into the map . (key = arr[i] & value = frequency)
        // store the map value in the set 
        // Then check the compare the size of map and size of set . if the size is same then return true else return false 
        unordered_map<int , int> mp ; 
        unordered_set<int> s ;
        for(int i = 0 ; i < arr.size() ; i++){ mp[arr[i]]++ ; }
        for(auto x : mp){ s.insert(x.second);}
        if(s.size()==mp.size())return true ;
        return false ; 
    }
};