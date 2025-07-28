#include<stdio.h>

int singleNonDuplicate(int* nums,int numsSize){
    int sp=0,ep=numsSize-1;
    while(sp<ep){
        int mid=sp+(ep-sp)/2;
        if(mid%2==1)mid--;
        if(nums[mid]==nums[mid+1]){
            sp=mid+2;
        }else{
            ep=mid;
        }
    }
    return nums[sp];
}
int main(){
int s;
printf("enter size:-");
scanf("%d",&s);
if(s%2==0)return 1;

int arr[s];
printf("enter element:-");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int result=singleNonDuplicate(arr,s);

    printf(" single element:- %d",result);

    return 0;
}