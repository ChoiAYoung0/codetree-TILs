#include <stdio.h>

int main() {
    char arr[10][200];

    for(int i=0 ; i<10 ; i++)
    {
        scanf("%s",arr[i]);
    }
    for(int i=0 ; i<10 ; i= i+2)
    {
        printf("%s\n",arr[i]);
    }
    return 0;
}