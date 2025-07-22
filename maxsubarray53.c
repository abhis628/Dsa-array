#include<stdio.h>
int maxsubarray(int *nums,int numsSize){
    int maxsum=0;
    int maxwindow=0;
    for(int i=0;i<numsSize;i++){
        maxwindow=maxwindow+nums[i];
        if(maxwindow>maxsum){
            maxsum=maxwindow;
        }
        if(maxwindow<0){
            maxwindow=0;
        }
    }
    return maxsum;

}
int main(){
    int s=5;
    int arr[s];
    printf("enter elements");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    int result=maxsubarray(arr,s);
    printf("long subarray %d",result);
}