#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
int main(){
 struct node a,b,c,d;

 a.data=1;
 a.next=&b;
 b.data=2;
 b.next=&c;
 c.data=3;
 c.next=&d;
 d.data=4;
 d.next=NULL;
 int count=0;
 struct node *move= &a;
 while(move!=NULL){
    if(move->data%2==0){
        count++;
    }
    move=move->next++;
 }
 printf("even no %d",count);
}