#include<stdio.h>
#include<stdbool.h>
bool isUgly(int no){
    if(no<=0){
        return false;
    }
    while(no%2==0){
        no/=2;
    }
    while(no%3==0){
        no/=3;
    }
    while(no%5==0){
        no/=5;
    }
    return no==1;
}
int main(){ 
int no;
printf("enter no");
scanf("%d",&no);
int result=isUgly(no);
printf("result  %d",result);
    return 0;
}