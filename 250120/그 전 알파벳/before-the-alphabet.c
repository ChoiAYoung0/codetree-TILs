#include <stdio.h>

int main() {
    
    //a 97 z 122

    char b;

    scanf("%c",&b);

    if(b == 'a')
        printf("z");
    else
        printf("%c",b-1);


    return 0;
}