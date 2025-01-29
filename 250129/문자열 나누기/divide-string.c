#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char arr[10][11];
    char tot[110];
    int idx=0;
    int tlen;

    scanf("%d",&n);

    for(int i=0 ; i<n ; i++)
    {
        scanf("%s",arr[i]);
    }

    for(int i=0 ; i<n ; i++)
    {
        int len = strlen(arr[i]);
        for(int j=0 ; j<len ; j++)
        {
            tot[idx] = arr[i][j];
            idx++;
        }
    }

    tot[idx] = '\0';
    tlen = strlen(tot);

    for(int i=0 ; i<tlen ; i++)
    {
        printf("%c",tot[i]);
        if(i%5==4)
        {
            printf("\n");
        }
    }


    return 0;
}