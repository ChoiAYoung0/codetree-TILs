#include <stdio.h>
#include <string.h>

int main() {
    char arr[21];
    char a;
    int idx=0;
    int ex=0;
    int len;


    scanf("%s",arr);
    scanf(" %c",&a);

    len = strlen(arr);

    for(int i=0 ; i<len ; i++)
    {
        if(arr[i]==a)
        {
            printf("%d",i);
            ex=1;
            break;
        }
    }

    if(ex==0)
        printf("No");


    return 0;
}