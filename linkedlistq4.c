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
    int sum=0;
    int sq=0;
    struct node *move=&a;
    while(move!=NULL){
        sq=move->data*move->data;
        // printf("sq %d",sq);
         sum=sum+sq;
        move=move->next++;
    }
    printf("sum of sq %d",sum);
}