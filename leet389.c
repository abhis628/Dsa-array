#include<stdio.h>
#include<string.h>

char findD(char* s,char* t){
    char result =0;
    while(*s){
        result^=*s;
        s++;
    }
    while(*t){
        result^=*t;
        t++;
    }
    return result;
}

int main(){
int s;
printf("enter size");
scanf("%d",&s);
char str[s];
printf("enter string");
scanf("%s",&str);

int s1;
printf("enter size");
scanf("%d",&s1);
char str1[s1];
printf("enter string");
scanf("%s",str1);

char result=findD(str,str1);
printf("result %c",result);
    return 0;
}