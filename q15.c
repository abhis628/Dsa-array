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
int count=0;
for(int i=0;i<s;i++){
    int unique=1;
    for(int j=i+1;j<s;j++){
        if(arr[i]==arr[j]){
            unique=0;
            break;
        }
    }
    if(unique){
        printf("%d",arr[i]);
        count++;
    }
}
printf("unique no is %d",count);
    return 0;
}