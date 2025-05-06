#include<stdio.h>
#include<stdlib.h>

int searchInsert(int* nums, int numsSize, int target) {
    
    int begin = 0,end = numsSize-1; //assign begin and end values
    int   mid; //declare a variable to caluculate middle value
   
    while(begin<end)
    {
        mid = (begin+end)/2; //calculate mid index for each part
        if(nums[mid] == target){
            return mid; //return mid if target found

        }
        if(nums[mid] < target){ //if mid value is smaller target is present in the lower part 
            begin = mid + 1;
        }else{
            end = mid - 1; //else target is present in upper half
        }
    
    }
    return begin

    
}

void accept_array(int *nums,int n){ // function to accept values array
    printf("\nEnter the values of array: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&nums[i]);
    }
    
}

void print_array(int *nums,int n){ // function to print values array
    printf("\nValues of array: ");
    for (int i = 0; i < n; i++){
        printf("%d\t",nums[i]);
    }
    
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int *nums = calloc(n,sizeof(n));
    accept_array(nums,n);

     int target;
    printf("Enter the target: ");
    scanf("%d",&target);

    int index = searchInsert(nums,n,target);
    printf("Index %d\n",index);
}
