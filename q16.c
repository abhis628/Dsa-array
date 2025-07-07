#include<stdio.h>
int main(){
int s;
printf("enter element:-");
scanf("%d",&s);
int arr[s];

printf("enter element:-");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int target,count=0;
printf("enter target:-");
scanf("%d",&target);
for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
      if(arr[i]+arr[j]==target){
        printf("%d+%d=%d",arr[i],arr[j],target);
        count=1;
        break;
      }
    }
    if(count){
      break;
    }
}
if(!count){
  printf("no pair found");
}
    return 0;
}