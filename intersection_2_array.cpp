// Problem number 349 
#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<map>
#include<set>
using namespace std ; 



// APPROACH 1 :- 

//  first of all we make two unordered set
// Then make a ans vectore which store the final output 
// Then store the 2 given arrays nums1 and nums2 into the set respectively . we store these array into the set because we want diffrent element 
// then we use iterator to iterate the element of set 1 and find the element of set 2 into the set1 . 
// if find it then we push_back to the ans vectore and finally we will return the ans vector .
class Solution 
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector <int> ans ;
      unordered_set<int> s1,s2;
      for(int x =0 ; x< nums1.size(); x++){
        s1.insert(nums1[x]);
      }
    //   nums1.erase() ;
      for(int x =0 ; x< nums2.size(); x++){
        s2.insert(nums2[x]);
      }
      for(auto x = s2.begin(); x != s2.end(); x++)
      {
        if(s1.find(*x)!= s1.end())
        {
         ans.push_back(*x);
        }
      }
      return ans ;
    }

};


// Approach 2 :- 
// First of all declare two map and vector ans  
// And store the nums1 and nums2 respectively into the maps 
// Then find map2 element in map 1.
// If we find the element then we will push_back the value into the ans vector 
// return the ans vector


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map1 ,map2 ;
        vector<int> ans ; 
        for (int i = 0; i < nums1.size(); i++)
        {
            map1[nums1[i]] ;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            map2[nums2[i]];
        }
        for (auto i = map1.begin(); i != map1.end(); i++)
        {
          if(map2.find(i->first)!= map2.end())
          {
            ans.push_back(i->first);
          }
        }
        return ans ;
    }
};
// APPORACH 3 :- 

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        ios::sync_with_stdio(0);
        unordered_map<int, int> map ; 
        unordered_set<int> set ; 
        for(int i =0 ; i<nums1.size(); i++)
        {
          map[nums1[i]] ;
        }
        nums1.clear();
        for(auto x =0;x<nums2.size();x++)
        {
            if(map.find(nums2[x])!=map.end())
            {
                set.insert(nums2[x]);
            }
        }
        for(auto x = set.begin(); x != set.end(); x ++)
        {
            nums1.push_back(*x);
        }
        return nums1 ;
    }
};