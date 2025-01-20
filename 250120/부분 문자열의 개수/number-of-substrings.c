#include <stdio.h>
#include <string.h>

int main() {
    char A[1001],B[3];
    int lenA;
    int cnt=0;

    scanf("%s",A);
    scanf("%s",B);

    lenA = strlen(A);

    for(int i=0 ; i<lenA-1 ; i++)
    {
        if(A[i]==B[0] && A[i+1]==B[1])
            cnt++;
    }

    printf("%d",cnt);


    return 0;
}