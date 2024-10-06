// Question : - Reverse a vowel string  
// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

// Example 1:

// Input: s = "IceCreAm"

// Output: "AceCreIm"

// Explanation:

// The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

// Example 2:

// Input: s = "leetcode"

// Output: "leotcede"
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std ; 
class Solution {
public:
    string reverseVowels(string s) {
        // We use two pointe approach to solve this 
        // We take one pointer i and other pointer j ; 
        // i start form begining and j start from the end ; 
        // Then we declare a string name vowel which consist of all upper and lower case vowel 
        // Run a while loop till the i and j both are equal .
        // Now we use find function and check that s of i and s of j is present in vowel string or not ; 
        // If s of i is not present in the string vowel then increment the i 
        // Else if check that s of j is present in string vowel or not if it is not present then decrement the j pointer by 1 ;
        // if both are found then swap the i and j pointer 
        // return the s 

        int i = 0 ;
        int j = s.length() - 1;
        string vowel = "aeiouAEIOU";
        while( i < j )
        {
         if(vowel.find(s[i])== string::npos) i++ ; 
         if(vowel.find(s[j])== string::npos) j-- ;
         else { swap(s[i],s[j]); i++ ; j-- ;}
        }
    return s ;
    }
};