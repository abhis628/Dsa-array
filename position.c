#include<stdio.h>
int main(){
int size;
printf("enter size:-");
scanf("%d",&size);
int arr[size];
int i=0;
printf("enter element:-");
for( ;i<size;i++){
    scanf("%d",&arr[i]);
}
int no;
printf("enter no for search:-");
scanf("%d",&no);
int count=0;
for(int i=0;i<size;i++){
    if(arr[i]==no){
         printf("index %d",i);
        count=1;
    }
}
 
    return 0;
}