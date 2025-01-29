#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    int n;

    scanf("%s",arr);
    scanf("%d",&n);

    if(strlen(arr)<n)
    {
        for(int i=strlen(arr)-1 ; i>=0 ; i--)
        {
            printf("%c",arr[i]);
        }
    }
    else
    {
        for(int i=strlen(arr)-1 ; i>=strlen(arr)-n ; i--)
        {
            printf("%c",arr[i]);
        }
    }

    


    return 0;
}