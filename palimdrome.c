#include<stdio.h>
#include<stdbool.h>
#define bool_Bool
bool isPalindrome(int x)
{
    long int rev = 0;
    int temp, fun = x;
    if (x < 0) 
        return 0;
    
    while (x != 0) 
    {
        temp = x % 10;
        rev = rev * 10 + temp;
        x = x / 10;
    }
    if (rev == fun)
        return 1;
return 0 ;
}
