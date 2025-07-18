#include<stdio.h>
#include<String.h>
#include<stdlib.h>

int version(const char *version1,const char *version2){
char *v1=strdup(version1);
char *v2=strdup(version2);

char *token1=strtok(v1,".");
char *token2=strtok(v2,".");
while(token1!= NULL || token2 != NULL){
    int num1=token1?atoi(token1):0;
    int num2=token2?atoi(token2):0;

    if(num1>num2){
        free(v1);
        free(v2);
        return 1;
    }else if(num1<num2){
        free(v1);
        free(v2);
        return -1;
    }
    token1=strtok(NULL,".");
    token2=strtok(NULL,".");
    return 0;
 }
}
int main(){
printf("%d\n",version("1.01","1.001"));
printf("%d\n",version("0.1","1.1"));
}