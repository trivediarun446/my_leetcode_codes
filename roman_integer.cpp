#include<iostream>
#include<unordered_map>
#include<string> 
using namespace std ; 
class Solution {
public:
    int romanToInt(string s) {
       
       unordered_map<char, int> m;
        // Here we are passing values to keys for example char I is equal to 1 ;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int ans = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(m[s[i]] < m[s[i+1]]){
                // Here we use the logic if the next string character is greater so we take the number to be negative 
                ans -= m[s[i]];
            }
            else{
                // uske alwa hm sb mein sb kuch add kar ke ans return kar denge 

                ans += m[s[i]];
            }
        }
        return ans; 
    }
};
int main ()
{
    
}