#include<stdio.h>
int main(){
int s;
printf("enter array size");
scanf("%d",&s);
int arr[s];
printf("enter element:-");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int count=1;
for(int i=0;i<s;i++){

    if(arr[i]!=arr[s-i-1]){
        count=0;
        break;
    }
}
if(count){
    printf("it is palindrom");
}
else{
    printf("it is not palindrom");
}

    return 0;
}