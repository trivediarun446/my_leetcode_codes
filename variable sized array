// It is a hacker rank problem in this a use 2d vector to solve the problem 
#include<iostream> 
#include<stdlib.h>
#include<vector>
using namespace std ; 
int main ()
{
  // n is number of element in parent array  and q is number of qurries  
   int n , q ; 
   cout<<"enter the value of n and q "<<endl ; 
   cin>> n >> q ;
  //  here we initialize the vector of vector because we want to save the address of child 
  //  vector into the parent vector . It is 2d vector  
  vector<vector <int>> vec(n) ;
  for (int i = 0; i < n; i++)
  {
    // it is the size of sub array or child array 
    int k ; 
    cout<<"enter the value of k "<< endl ;
    cin >> k ; 
    vector<int> arr(k); 
    cout<<"enter the array element of child array"<<endl; 
    for (int i = 0; i < k; i++)
    {
      cin>>arr[i];
    }
    vec[i]=arr;
  }
  for (int z = 0; z < q; z++)
  {
    int i , j ;
    cout<<"enter the value of i , j"<<endl ; 
    cin >> i >> j ;
    cout<<vec[i][j] <<endl ; 
  }
  
}
