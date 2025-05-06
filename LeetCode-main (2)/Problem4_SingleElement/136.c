#include<stdio.h>
#include<stdlib.h>

int singleNumber(int* nums, int numsSize) {

    if(numsSize>1){
    int single = 0;
    for(int i = 1 ; i < numsSize;++i)
    {
        if(nums[single] == nums[i]){
            single++;
        }
    }  

    return nums[single]; 
    }
    return nums[0];
}

int main()
{
  int n;
  print("Enter the size of array\n");
  scanf("%d",&n);
  int *nums = malloc(n*sizeof(int));
  
  int result = singleNumber(nums,n);
  printf("Single Element in array is %d\n",result);

}