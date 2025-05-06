#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
    int *ans = malloc(2*sizeof(int));
    *returnSize = 0;
    for(int i = 0;i<numsSize;++i){
        for(int j = i+1 ; j < numsSize;++j){
            if(nums[i]+nums[j] == target){
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                
            }
        }
    }

    
    return ans;
}

int main(){

    int numsSize = 4;
    int *nums = malloc(numsSize*sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d",&nums[i]);
    }
    
    int target;
    printf("Enter target\n");
    scanf("%d",&target);

    int resultSize;

    int *result = twoSum(nums,numsSize,target,&resultSize);

     if (result != NULL && resultSize == 2) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
    } else {
        printf("No solution found.\n");
    }

    // Free the dynamically allocated memory for result
    free(result);

    return 0;


}