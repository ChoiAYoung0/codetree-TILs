#include <stdio.h>

int main() {
    char arr[101];
    char two;
    scanf("%s",arr);
    two = arr[1];

    for(int i=0 ; arr[i] != '\0' ;i++)
    {
        if(arr[i]==two)
            arr[i] = arr[0];
    }

    printf("%s",arr);
    
    return 0;
}