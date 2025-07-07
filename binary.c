#include<stdio.h>
int main(){

    int s;
    printf("enter array size;");
    scanf("%d",&s);

    int arr[s];
    printf("enter element:-");
    for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
    }
    int k;
    printf("enter k");
    scanf("%d",&k);
  int found=-1;
    int sp=0,ep=s-1;
    while(sp<=ep){
        int mid=(sp+ep)/2;
        if(arr[mid]==k){
           found=mid;
        }
        if(arr[sp]<=arr[mid]){
            if(k>=arr[sp]&&k<=arr[sp]){
                ep=mid-1;
            }
            else{
                sp=mid+1;
            }
    }
    else{
        if(k>arr[mid]&&k<=arr[ep]){
            sp=mid+1;
        }
        else{
            ep=mid-1;
        }
    }
}
if(found!=-1){
printf("target=%d",found);
}
    return 0;
}