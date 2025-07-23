#include<stdio.h>
int search(int *nums,int numsSize,int target){
 
    int sp=0,ep=numsSize-1;
    while(sp<=ep){
        int mid=sp+(ep-sp)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            sp=mid+1;
        }else {
            ep=mid-1;
        }
    }
    return sp;
}
int main(){
int s=5;
int arr[s];
printf("enter element");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);

}
int target;
printf("enter target");
scanf("%d",&target);
int result=search(arr,s,target);
printf("%d",result);
    return 0;
}