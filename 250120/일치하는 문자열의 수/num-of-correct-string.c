#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char A[101];
    int cnt=0;

    scanf("%d",&n);
    scanf("%s",A);

    for(int i=0 ; i<n ; i++)
    {
        char b[101];
        scanf("%s",b);
        if(strcmp(A,b)==0)
            cnt++;
    }

    printf("%d",cnt);


    return 0;
}