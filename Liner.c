#include<stdio.h>
int main(){
int size;
printf("enter array size");
scanf("%d",&size);
int arr[size];

printf("enter element");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
int no;
int count=0;
printf("enter no for search");
scanf("%d",&no);

for(int i=0;i<size;i++){
    if(arr[i]==no){
        printf("elemant %d is found is index %d",no,i);
        count=1;
    }

}
    return 0;
}