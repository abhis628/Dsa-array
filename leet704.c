#include<stdio.h>
                               
int search(int *nums,int numsSize,int target){
    int sp=0,ep=numsSize-1;
    while(sp<ep){
        int mid=(sp+ep)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            ep=mid-1;
        }else{
            sp=mid+1;
        }
    }
    return -1;
}
int main(){
int s;
printf("enter size");
scanf("%d",&s);

int arr[s];
printf("enter element:-");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int target;
printf("target");
scanf("%d",&target);

int result=search(arr,s,target);
printf("%d",result);
    return 0;
}