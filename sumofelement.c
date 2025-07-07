#include<stdio.h>
int main(){
int size;
printf("enter size of array:-");
scanf("%d",&size);
int arr[size];
int sum=0;
printf("enter element:-");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
    sum=sum+arr[i];
}
printf("sum of element is %d",sum);
    return 0;
}