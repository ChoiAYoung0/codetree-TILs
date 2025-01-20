#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char A[101],B[101];
    int lenA;
    char temp;
    int n=0;

    scanf("%s%s",A,B);
    lenA = strlen(A);

    for(int j=0 ; j<lenA ; j++)
    {
        temp = A[lenA-1];
        for(int i=lenA-1 ; i>0 ; i--)
        {
            A[i] = A[i-1];
        }
        A[0] = temp;
        n++;
        if(strcmp(A,B)==0)
        {
            break;
        }
    }

    if(n>=lenA)
        printf("-1");
    else
        printf("%d",n);

    





    return 0;
}