#include<stdio.h>
void merge(int* arr1,int m,int* arr2,int n){
int i=m-1;
int j=n-1;
int k=m+n-1;

 while(i>=0&&j>=0){
    if(arr1[i]>arr2[j]){
        arr1[k--]=arr2[i--];
    }
    else{
        arr1[k--]=arr2[j--];
    }
 }
// while(j>=0){
//     arr1[k--]=arr2[j--];
// }
}
int main(){
int s;
printf("enter size");
scanf("%d",&s);
int arr1[s];

printf("enter element");
for(int i=0;i<s;i++){
    scanf("%d",&arr1[i]);
}
int s1;
printf("enter size1");
scanf("%d",&s1);
int arr2[s1];
printf("enter element");
for(int j=0;j<s1;j++){
    scanf("%d",&arr2[j]);
} int m=3,n=3;

merge(arr1,m,arr2,n);
printf("merge array");
for(int i=0;i<m+n;i++){
    printf("%d",arr1[i]);
}
    return 0;
}