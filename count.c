#include<stdio.h>
int main(){
int size;
printf("enter array size:-");
scanf("%d",&size);
int arr[size];

printf("enter element:-");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
printf("enter no for search:-");
int no;
scanf("%d",&no);
int count=0;
for(int i=0;i<size;i++){
    if(arr[i]==no){
        count++;
    }
}
printf(" %d no in persent %d timr",no,count);

    return 0;
}