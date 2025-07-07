#include<Stdio.h>
int main(){

int size=5;
int arr[size];
int max=0;
printf("enter element");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
printf("max is %d",max);

    return 0;
}