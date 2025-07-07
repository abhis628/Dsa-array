#include<stdio.h>
int main(){
int size;
printf("enter array size");
scanf("%d",&size);
int arr[size];
int max=0;
int mini;
printf("enter element");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    } 
    if(arr[i]<mini){
        mini=arr[i];
    }
}
printf("max no %d",max);
printf("mini no %d",mini);
    return 0;
}