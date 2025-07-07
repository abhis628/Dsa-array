#include<stdio.h>
int main(){
    int size=5;
    int arr[size];
    int mini;
    printf("enter element");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(mini>arr[i]){
            mini=arr[i];
        }
    }
    printf("mini is %d",mini);
    return 0;
}