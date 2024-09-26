//Check the number is happy or not happy 
// Note:- If the number contain the 4 then it will we a unhappy number beacuse when ever we square and sum the number then after some calculation we will get 4 then it will create a loop which will never ended ;
#include<iostream>
using namespace std ; 
class Solution {
public:
// Approach :- 
    //    1) Sab se pahle hm check kare ge ki n kahi one to nhi hai agr one hai to return true kr do 
    //   2) Fir hm ek loop chalege vo tb tk chale ga jb tk hmko one na mil jye sam karte karte aur sath mein vo yeh bhi check     karega ki number kahi four to nhi hai 
    //   3) fir hm agla loop chalaye ge vo tb tk chalega jb tk hamra num zero na ho jyye agr zero.
    // 4) Fir loop chalne ke bad hm dekhe ge ki number one ke bara bar hai ki nhi hai
    // 5) agar barabar hai to return true kar denge nhi to fir hm sum ki value n ko de denge aur fir sum ko zero kr denge 


    bool isHappy(int n) {
        int rev =0 ; int sum=0 ;
        if(n==1)return true ;
        while (n!=0 && n!=4)
        {
           while (n<0)
           {
               rev=n%10; 
               sum=sum+(rev*rev);
               n=n/10;
           }
           if (sum==1)
           {
               return true ;
           }
           
           n=sum; 
           sum=0 ;
        }
       return false ;  
    }
};