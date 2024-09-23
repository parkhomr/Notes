#include <stdio.h>
#define SIZE 5

// int arr[x] This will give random values if printed
// int arr[x] = {} or {0} This will give 0's if printed
int main(){
    char arr[] = {'M','I','K','E', 'j'};

    for (int i=0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }
    return 0;
}