#include<stdio.h>
#include<stdbool.h>
bool search(int* matrix,int matrixSize,int matrixcolSize,int target){
    int match=true;
for(int i=0;i<matrixSize;i++){
    for(int j=0;j<matrixcolSize;j++){
        if(matrix[i][j]==target){
            return match;
        }
    }
}
return false;
}
int main(){
int r;
printf("enter size");
scanf("%d",&r);
int c;
printf("enter column:-");
scanf("%d",&c);

int arr[r][c];

printf("enter element:-");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[r][c]);
    }
}
int target;
printf("enter target:-");
scanf("%d",&target);

int result=search(arr,r,c,target);
printf("result= ",result);
    return 0;
}