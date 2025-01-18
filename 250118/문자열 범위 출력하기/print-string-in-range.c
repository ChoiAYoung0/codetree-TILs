#include <stdio.h>

int main() {
    char str[101];
    scanf("%[^\n]",&str);
    for(int i=2 ; i<10 ; i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}