#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char arr[10][101];
    char tot[1010];
    int idx=0;

    scanf("%d",&n);

    for(int i=0 ; i<n ;i++)
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
    printf("%s",tot);


    return 0;
}