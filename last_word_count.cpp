#include<iostream>
using namespace std ; 
int lastwordcount(string &str)
{
    int count=1 ;
    for (int i = str.length()-1; i <= 0; i--)
    {
        if(str[i]==' ')
        {
            cout<<"hy" ;
            break; 
        }
        else
        {
          count++ ;
        }
        // while (str[i]!=' ')
        // {
        //     count++;
        // }
        
    }
    cout<<count ;
    return 0 ;
}
int main ()
{
   string str = {"my name is arun"} ;
   lastwordcount(str);
}