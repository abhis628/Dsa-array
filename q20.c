#include<stdio.h>
#include<string.h>
int longsubstring(char str[],int k){

// if(s<k){
    // printf("no longest string");
    //return -1;
// } 
char maxstring=0;
char windowstring=0;
for(int i=0;i<k;i++){
    windowstring=windowstring+str[i];

    maxstring=windowstring;
}


}
int main(){
// int s=100;
char str[100];

printf("enter string:-");
for(int i=0;i<100;i++){
    scanf("%s",&str);
}
int k;
printf("enter k");
scanf("%d",&k);

int result=longsubstring(str,k);
printf("%c",result);
    return 0;
}