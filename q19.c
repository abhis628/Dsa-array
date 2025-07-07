#include<stdio.h>
int maxsubarrysum(int arr[],int s,int k){
    if(s<k){
        printf("invailid k is longer");
        return -1;
    }

    int maxsum=0;
    int windowsum=0;
    for(int i=0;i<k;i++){
        windowsum=windowsum+arr[i];
        maxsum=windowsum;
    }
    for(int i=k;i<s;i++){
        windowsum=windowsum+arr[i]-arr[i-k];
        if(windowsum>maxsum){
            maxsum=windowsum;
        }
        return maxsum;
    }

}
int main(){
int s;
printf("enter Array size"); 
scanf("%d",&s);
int arr[s];

printf("\nenter element:-");
for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
}
int k;
printf("\nenter k");
scanf("%d",&k);
s=sizeof(arr)/sizeof(arr[0]);

int result=maxsubarrysum(arr,s,k);
printf("max sum of subarray of size %d is %d\n",k,result);


    return 0;
}