#include<iostream>
#include<vector>
using namespace std ; 

// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

// Example 1:

// Input: s = "abc", t = "ahbgdc"
// Output: true
// Example 2:

// Input: s = "axc", t = "ahbgdc"
// Output: false
class Solution {
public:
    bool isSubsequence(string s, string t) {
        // Approach 
        // first of take two pointer and count variable and initalised then with zero 
        // then traverse both string using while loop 
        // IF the both pointer content is same then increse two pointer and count variable by 1 
        // If not present then increment j by one 
        // In last check count == to s.size() if equal then return true else return false 
        int count = 0 ; 
        int i = 0 , j=0 ;
        while (i < s.size() && j < t.size())
        {
            if(s[i]== t[j]){count ++ ; i++ ; j++ ;}
            if(s[i]!= t[j]) j++ ; 
        }
        if(count == s.size()) return true ;

        return false ;
    }
};