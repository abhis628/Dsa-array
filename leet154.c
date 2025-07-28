#include<stdio.h>
int findmini(int* nums,int numsSize){
    int sp=0,ep=numsSize-1;
    while(sp<ep){
        int mid=sp+(ep-sp)/2;
        if(nums[mid]>nums[ep]){
            sp=mid+1;
        }else if(nums[mid]<nums[ep]){
            ep=mid;
        }else{
            ep--;
        }
    }
    return nums[sp];
}

int main(){
int s;
printf("enter size:-");
scanf("%d",&s);
int arr[s];
printf("enter element:-");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int result=findmini(arr,s);
printf("result %d",result);
    return 0;
}