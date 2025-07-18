#include<stdio.h>
#include<stdbool.h>
bool validString(char*s){
  int low=0;int high=0;

  for(int i=0;s[i]!='\0';i++){
    if(s[i]=='('){
        low++;
        high++;
    }else if(s[i]==')'){
        if(low>0){
            low--;
            high--;
        }
    }else if(s[i]=='*'){
        if(low>0){
            low--;
            high++;
        }
    }
    if(high<0) return false;
    
  }
  return low==0;

}

int main(){
printf("%d\n",validString("(*)"));
printf("%d\n",validString("(*)()"));
}