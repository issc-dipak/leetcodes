#include<stdio.h>
#include<stdlib.h>
void k_multiplications(int *nums,int n,int k,int multiplier){

    int min_index;
    for (int i = 0; i < k; ++i){
        min_index = 0;
        for (int j = 1; j < n; ++j){
            if(nums[min_index] > nums[j]){
                min_index = j;
            }
        }
        nums[min_index] = multiplier*nums[min_index]; 
    }
    
}

void accept_array(int *nums,int n){
    printf("\nEnter the values of n: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&nums[i]);
    }
    
}

void display_array(int *nums,int n){
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

    printf("Enter the value of k: ");
    int k;
    scanf("%d",&k);

    printf("Enter the value of multiplier: ");
    int multipier;
    scanf("%d",&multipier);

    int *nums = calloc(n,sizeof(n));

    accept_array(nums,n);
    display_array(nums,n);

    k_multiplications(nums,n,k,multipier);

    display_array(nums,n);

}