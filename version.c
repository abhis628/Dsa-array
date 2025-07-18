#include<stdio.h>
#include<stdlib.h>

int version(char*version1,char*version2){
    while (*version1||*version2){
        int num1=0,num2=0;

        while(version1&&*version1!='.'){
            num1=num1*10+(*version1-'0');
            version1++;
        }
        while(version2&&*version2!='.'){
            num2=num2*10+(*version2-'0');
            version2++;
        }
        if(num1>num2)return 1;
        if(num1<num2)return-1;
        
        if(*version1) version1++;
        if(*version2) version2++;
    }
    return 0;
}
int main(){
    char* v1="1.01";
    char* v2="1.001";
    int result = version(v1,v2);
    if(result==0){
        printf("version equal\n");

    }else if(result<0){
        printf("version small");
    }else{
        printf("version big");
    }


}