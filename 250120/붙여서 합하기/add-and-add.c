#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char A[1001],B[1001];
    char ab[2002],ba[2002];
    int lenA,lenB;
    int abint, baint;

    scanf("%s %s",&A,&B);
    lenA = strlen(A);
    lenB = strlen(B);

    for(int i=0 ; A[i]!='\0' ; i++)
    {
        ab[i] = A[i];
    }
    for(int i=0 ; B[i]!='\0' ; i++)
    {
        ab[i+lenA] = B[i];
    }

    for(int i=0 ; B[i]!='\0' ; i++)
    {
        ba[i] = B[i];
    }
    for(int i=0 ; A[i]!='\0' ; i++)
    {
        ba[i+lenB] = A[i];
    }

    abint = atoi(ab);
    baint = atoi(ba);

    printf("%d",abint+baint);


    return 0;
}