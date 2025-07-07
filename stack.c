#include<stdio.h>
# define size 100
int stack[size];
int top=-1;
void push(int num){
if(top==size-1){
    printf("stack overflow\n");
}
else{
    ++top;
    stack[top]=num;
    
}
}
int pop(){
  if(top==-1){
    printf("underflow\n");
  }
  else{
     return stack[top--];

  }

}

int main(){
 int no;
 printf("enter array size:-");
 scanf("%d",&no);
 int arr[size];
 printf("enter element:-");
 for(int i=0;i<no;i++){
    scanf("%d",&arr[i]);
    
 }  
for(int i=0;i<no;i++){
    
    push(arr[i]);
}
int i=0;
while(top!=-1){

    int popelement=pop();
    arr[i]=pop();
}

     printf("reverse stack\n");
     for(int i=0;i<no;i++){
         printf("%d ",arr[i]);
     }
    return 0;
}