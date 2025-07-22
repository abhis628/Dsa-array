#include<stdio.h>
int insert(int* nums,int numsSize,int target){
    int sp=0,ep=numsSize-1;
    while(sp<=ep){
        int mid=sp+ep/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            sp=mid+1;
        }else{
            ep=mid-1;
        }
    }
    return sp;
}
int main(){
int s;
printf("enter size");
scanf("%d",&s);
int arr[s];
printf("enter elements:-");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int target;
printf("enter tarhet");
scanf("%d",&target);
int result=insert(arr,s,target);
printf(" inser position %d",result);

    return 0;
}