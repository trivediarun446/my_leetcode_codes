//  1071 :-  GCD of a string 

// For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).

// Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

// Example 1:

// Input: str1 = "ABCABC", str2 = "ABC"
// Output: "ABC"
// Example 2:

// Input: str1 = "ABABAB", str2 = "ABAB"
// Output: "AB"
// Example 3:

// Input: str1 = "LEET", str2 = "CODE"
// Output: ""
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include <numeric>
using namespace std ; 
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        //first of check sum str1 and str2 is not equal to str2 +  str1 then return empty string 
        // then take the gcd of both string length using gcd function 
        // This function return the gcd of their length 
        // After that return the substring of str1 from 0 to gcd ; 
        if(str1 + str2 != str2 + str1 )return "" ;
        int ans = gcd(str1.length() , str2.length());
        return str1.substr(0,ans);
    }
};