#include<stdio.h>
int main(){
int s;
printf("enter array size:-");
scanf("%d",&s);
int arr[s];

printf("enter element:-");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int count=1;
for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
        if(arr[i]==arr[j]){
            printf("%d",arr[i]);
         count=0;
         break;
        }
    }
}
if(count){
    printf("not fount");
}
    return 0;
}