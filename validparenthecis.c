#include<stdio.h>
#include<string.h>

#define MAX 1000
int isvalid(char* str){
    char stack[MAX];
    int top=-1;
    for(int i=0;str[i];i++){
        char ch=str[i];
        if(ch=='('||ch=='['||ch=='{'){
            stack[++top]=ch;
        
        }else {
            if(top==-1)return 0;
            char last=stack[top--];
            if((ch==')'&&last!='(')||(ch==']'&&last!='[')||(ch=='}'&&last!='{')){
                return 0;
            }
        }
    }
    return top==-1;
}
int main(){
    char str[100];
    printf("enter string braket");
    scanf("%s",str);

    if(isvalid(str)){
        printf("valid");
    }
}