#include<stdio.h>
#include<stdlib.h>

int getMinDistance(int* nums, int numsSize, int target, int start) {
    
    int index = 0;
    for(int i = start;i<numsSize;++i){
        if(nums[i] == target){
            index = i;
           
        }
    }

    if(target == nums[start]){
        return 0;
    }
    return abs(index-start);
    
}

void accept_array(int *nums,int n){ // function to accept values array
    printf("\nEnter the values of array: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&nums[i]);
    }
    
}

int main()
{
    int n;
    printf("\nEnter size of array: ");
    scanf("%d",&n); // accepting size of array from user

    int *array = calloc(n,sizeof(n)); // dynamically allocating the array
    accept_array(array,n); // accepting array values from user

    int target,start; 
    printf("\nEnter target and start: ");
    scanf("%d%d",&target,&start); // accepting target and start value from user

    int distance = getMinDistance(array,n,target,start); // caluculating the minimum distance
    printf("\n%d",distance); 

}
