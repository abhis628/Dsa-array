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
int target,found=0;
printf("enter target:-");
scanf("%d",&target);
for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
        for(int k=j+1;k<s;k++){
            for(int l=k+1;l<s;l++){
                if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                    printf("%d+%d+%d+%d=%d\n",arr[i],arr[j],arr[k],arr[l],target);
                    found=1;
                    break;
                }
            }
        }
        // if(found){
        //     break;
        // }
    }
}if(!found){
    printf("element not found for target");
}
    return 0;
}