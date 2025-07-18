#include<stdio.h>
#include<ctype.h>
void lower(char*str){
    for(int i=0;i<str[i];i++){
        str[i]=tolower(str[i]);
    }
}
int main(){
char str[]="HELLO";
lower(str);
printf("lower case %s",str);
return 0;
}