#include<stdio.h>
int main(){
int size;
printf("enter array size");
scanf("%d",&size);
int arr[size];
int sum=0;
int add=0;
printf("enter element:-");
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
    if(arr[i]%2==0){
        sum=sum+arr[i];
    }
    if(arr[i]%2!=0){
        add=add+arr[i];
    }
}
printf("sum of even no:- %d",sum);
printf("sum of odd no:- %d",add);
    return 0;
}