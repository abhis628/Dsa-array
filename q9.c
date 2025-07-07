#include<stdio.h>
int main(){
int size;
printf("enter array size:-");
scanf("%d",&size);
int arr[size];
int sum=0;
int add=0;
int i=0;
printf("enter element:-");
for( i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
for( i=0;i<size;i++){
  if(i%2==0){
    sum=sum+arr[i];
  }
  else{
    add=add+arr[i];
  }
}
printf("sum at even position:- %d",sum);
printf("sum of odd position:- %d",add);
    return 0;
}