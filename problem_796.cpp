// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

// A shift on s consists of moving the leftmost character of s to the rightmost position.

// For example, if s = "abcde", then it will be "bcdea" after one shift.
 

// Example 1:

// Input: s = "abcde", goal = "cdeab"
// Output: true
// Example 2:

// Input: s = "abcde", goal = "abced"
// Output: false
 

// Constraints:

// 1 <= s.length, goal.length <= 100
// s and goal consist of lowercase English letters.

// Approach 1 : 

// First of all rotate the whole string one by one rotation and check in each rotation s is equal to the goal 
// all rotation is done till the number of rotation is equal to the size of s 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std ; 
class Solution {
public:
    bool rotateString(string s, string goal) {
        if( s.size() > goal.size() || s.size() < goal.size()) return false  ;
        for (int i = 0; i < s.size(); i++)
        {
            rotate(goal.begin() , goal.begin()+1 , goal.end()) ;
            if( s == goal) return true ; 
        }
        return false ; 
    }
};

// Approach 2 :

// --> concatinate the string s with it self and check that the concatinated string has goal string . If goal is present in the concatinated string then return true and else return false 

class Solution {
public:
    bool rotateString(string s, string goal) {
        if( s.size() > goal.size() || s.size() < goal.size()) return false  ;

        string ans = s + s ;
        if(ans.find(goal)== string::npos) return false ;
        return true ; 
    }
};