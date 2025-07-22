#include<stdio.h>
#include<string.h>
int longsubstring(char *s){
    int n=strlen(s);
    int maxlen=0;
    int start=0;
    int map[256]={0};
    for(int i=0;i<n;i++){
        char current=s[i];
        map[(unsigned char)current]++;

         while(map[(unsigned char)current]>1){
            map[(unsigned char)s[start]]--;
            start++;
         }
         int windowlen=i-start+1;
         if(windowlen>maxlen){
            maxlen=windowlen;
         }
    }
    return maxlen;
}
int main(){
    int  a=100;
    char s[a];
    fgets(s,a,stdin);
   int result=longsubstring(s);
   printf("%d",result);
    return 0;
}