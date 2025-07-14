#include<stdio.h>
#include<string.h>

void substring(char str){
int lastindex[256];
for(int i=0;i<256;i++){
    lastindex[i]=-1;
}
int maxstring=0,start=0;
for(int end=0;str[end]!='\0';end++){
    char ch=str[end];
    if(lastindex[ch]<=start){
        start=lastindex[ch]+1;
    }
    lastindex[ch]=end;

    int wstring=end-start+1;
    if(wstring>maxstring){
        maxstring=wstring;
    }
}
printf("substring %s",maxstring);

}

int main(){
int s=100;
char str[s];
printf("enter string");
scanf("%s",str);

    return 0;
}