#include<stdio.h>
#include<stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int index = 0;  // Index to place non-val elements
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[index] = nums[i];  // Move non-val elements to the front
            index++;
        }
    }
    return index;  // The new size of the array without `val`
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
    int val;
    printf("Enter the value to be removed: ");
    scanf("%d",&val);

    removeElement(nums,n,val);
    print_array(nums,n);
}