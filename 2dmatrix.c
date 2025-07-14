#include<stdio.h>
int main(){
  int row;
  printf("enter row");
  scanf("%d",&row);
  int column;
  printf("enter column");
  scanf("%d",&column);
  int arr[row][column];
  printf("enter element");
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        scanf("%d",&arr[i][j]);
    }
  }

  int target,found=0,foundrow=-1,foundcol=-1;
  printf("enter target");
  scanf("%d",&target);

int sp=0;
int ep=row*column-1;

while(sp<=ep){
    int mid=(sp+ep)/2;
    int rows=mid/column;
    int cols=mid%column;
    int midelement=arr[row][column];
    if(arr[rows][cols]==target){
        found=1;
        foundrow=rows;
        foundcol=cols;
        break;
    }
    else if(arr[rows][cols]>target){
        ep=mid+1;
    }
    else{
        sp=mid-1;
    }

}
if(found!=0){
    printf("element %d found at index  [%d] [%d]",target,foundrow,foundcol);
}
else{
    printf("not found");
}

    return 0;
}