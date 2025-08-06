#include<stdio.h>
struct node{
    int data;
    struct node *next;
};

int main(){
  struct node a,b,c;
  a.data=1;
  a.next=&b;
  b.data=2;
  b.next=&c;
  c.data=3;
  c.next=NULL;
  struct node *move=&a;
  int sum=0;

 while(move!=NULL){
  sum=sum + move->data;
  
    // printf("%d",move->data);
    move=move->next++;
  }   
  printf("%d",sum); 
    return 0;
}