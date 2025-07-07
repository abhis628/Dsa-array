#include<stdio.h>
int main(){
int s;
printf("enter array size:-");
scanf("%d",&s);
int arr[s];

printf("ernter element:-");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int count=1;

for(int i=0;i<s;i++){
    for(int j=i+1;j<s; ){
        if(arr[i]==arr[j]){
            for(int k=j;k<s-1;k++){
                arr[k]=arr[k+1];
            }
            s--;
        }else{
            j++;
        }
    }
}
 for(int i=0;i<s;i++){
    printf("%d",arr[i]);
 }
    return 0;
}