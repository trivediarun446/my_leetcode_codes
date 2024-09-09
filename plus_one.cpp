#include<iostream>
#include<vector>
using namespace std ; 
class Solution {
public:
    vector<int> plusOne(vector<int>& digits){
        // Logic 
        // Sb se pahle hm array ko ulta kar denege 
        // fir uske bad hm us mein 1 ko add kar denge 
        // agar add krne mein vo number 10 ho to usko hn 0 kar denge 
        // fir uske next element mein 1 add kar dege 
        int n = digits.size();
        for(int i =n-1 ; i>=0;i--)
        {
            // agar first element hai to us first element mein 1 add kar do 
            
            if(i==n-1)
            digits[i]++;
            // agar number hamara 10 hai to hm usko 0 kar denge 
            if(digits[i]==10)
            {
                digits[i]=0;
                // agar vo last element nhi hai to 1 plus karte rhe ge 
                if(i!=0)
                {
                    digits[i-1]++ ;
                }
                // nhi to hm us mein zero hm add kar denge 
                else {
                    digits.push_back(0);
                    digits[i]=1;
                }
            }
        }
        return digits ;
    }
};
int main ()
{

}