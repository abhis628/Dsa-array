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
for(int i=0;i<(s/2);i++){
    int temp=arr[i];
    arr[i]=arr[s-i-1];
    arr[s-i-1]=temp;
}
for(int i=0;i<s;i++){   
printf("%d",arr[i]);
}
    return 0;
}