// write a cpp programe to print a given fibonacci number by using recursion 
class Solution {
public:
    int fib(int n) {
        // base 
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        int ans = fib(n-1) + fib(n-2);
        return ans ; 
    }
   
};

//  we can also make base case as 
// if(n==0|| n==1)
// {
//     return n ;
// }