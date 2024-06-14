#include<iostream>
#include<stdlib.h>
using namespace std ;

int searchInsert(int* nums, int numsSize, int target) {
    scanf("%d",&numsSize);
    nums=(int*)malloc(numsSize*sizeof(int));
    int mid=0,pos=0;
    printf("enter the array element");
    for(int i =0 ; i<numsSize ;i++)
    {
        scanf("%d",&nums+i);
    }
    scanf("%d",&target);
    int i=0 ;
    int j=numsSize;
    while(i<=j)
    {
        
        mid=(i+j)/2;
        if(*nums+mid==target)
        {
          pos=mid+1; 
          int newsize=numsSize++;
          for(int z = newsize-1 ; z < pos; z--)
          {
            nums[z]= nums[z-1];
          }
          nums[pos-1]=target;
          for (int x = 0; x < newsize; x++)
          {
          cout<<nums[i];

          }
          
        }
        else if (*nums+mid<target)
        {
            i=mid+1;
        }
        else 
        j=mid-1;
    }
}
int main()
{
    int *nums ,  numsSize=4,  target=5 ;
    nums=(int*)malloc(numsSize*sizeof(int));
    cout<<"enter the array element ";
    // for (int i = 0; i < numsSize; i++)
    // {
    //    cin >> nums[i];
    // }

    searchInsert(nums,  numsSize,  target);
    
}