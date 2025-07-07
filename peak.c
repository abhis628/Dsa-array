#include<stdio.h>
int main(){
int s;
printf("enter size ");
scanf("%d",&s);
int arr[s];
printf("enter element ");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int sp=0,ep=s-1,found=-1;
while(sp<=ep){
    int mid=(sp+ep)/2;
     if(arr[mid]>=sp&&arr[mid]>=ep){
    
        found=mid;
        break;
     }else{
        if(sp>arr[mid]){
            ep=mid-1;
        }
        else{
            sp=mid+1;
        }
     }
}
if(found!=-1){
    printf("peak value %d ,peak index %d",arr[found],found);
}else{
    printf("not found peak");
}
    return 0;
}