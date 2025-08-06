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
    struct node *move=&a;
    int sq;
    while(move!=NULL){
        sq=move->data*move->data;
        printf("%d ",sq);
        move=move->next++;
    }
}