#include<stdio.h>
#define size 100
int queue[size];
int start=-1;
int end=-1;

void push(int value){
    
    if(end==size-1){
        printf("queue is full can't insert data\n");
        return;
    }
    // else if(end==0){
    //     start=0;
    //     end=0;
    //     queue[end]=value;
    //     printf("queue no=%d",value);  
    // }
    else if(start==-1){
        end=end+1;
        queue[end]=value;
          printf("queue no=%d\n",value);

    }
    
}
void pop(){
    if(size==-1){
        printf("queue is empthy\n");
    }
    else if {
     printf("pop element %d", queue[start]);
        start++;
      
    }
}
int main(){
push(3);
push(4);
push(5);
pop();
pop();
    return 0;
}