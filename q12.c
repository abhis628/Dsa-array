#include<stdio.h>
int main(){
int s;
printf("enter array size");
scanf("%d",&s);
int arr[s];

printf("enter element");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int even[s],count=0;
for(int i=0;i<s;i++){
    if(arr[i]%2==0){
    even[count++]=arr[i];
    }
}
for(int i=0,j=count-1;i<j;i++,j--){
    int temp=arr[i];
    even[i]=even[j];
    even[j]=temp;
}
int evenelement=0;
for(int i=0;i<s;i++){
    if(arr[i]%2==0){
        arr[i]=even[evenelement++];
    }
}
for(int i=0;i<s;i++){
    printf("%d",arr[i]);
}
    return 0;
}