#include<stdio.h>
#include<string.h>
char* longestPrefix(char arr[][100], int n) {
    static char prefix[100];
    int i, j;

    strcpy(prefix, arr[0]);

    for (i = 1; i < n; i++) {
        j = 0;
        while (prefix[j] && arr[i][j] && prefix[j] == arr[i][j]) {
            j++;
        }
        prefix[j] = '\0'; 
        if (j == 0) {
            return ""; 
        }
    }
    return prefix;
}
int main(){
 
  int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char arr[n][100];
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    printf("Longest prefix: %s\n", longestPrefix(arr, n));
  return 0;
}