#include <stdio.h>
#include <string.h>

int main() {
    char arr[201][201];
    int cnt=0;

    for(int i=0 ; i<201 ; i++)
    {
        scanf("%s",arr[i]);
        if(strcmp(arr[i],"0")==0)
        {
            break;
        }
        cnt++;
    }

    printf("%d\n",cnt);
    for(int i=0 ; i<cnt ; i++)
    {
        if(i%2==0)
        {
            printf("%s\n",arr[i]);
        }
    }

    return 0;
}