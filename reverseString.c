#include<stdio.h>
#include<string.h>
void reverse(char* arr){
    int left=0;
    int right=strlen(arr)-1;

    while(left<right){
        char temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
}
int main(){
    char str[]="Helloworld";
    reverse(str);
    printf("reverse string %s",str);
}