#include <stdio.h>
#include <string.h>

int main() {
    char A[101],B[101];
    char arr1[202],arr2[202];
    int cnt1,cnt2;
    int idx=0;

    scanf("%s",A);
    scanf("%s",B);

    cnt1 = strlen(A);
    cnt2 = strlen(B);

    for(int i=0 ; i<cnt1 ; i++)
    {
        arr1[i] = A[i];
    }
    for(int i=0 ; i<cnt2 ; i++)
    {
        arr1[i+cnt1] = B[i];
    }

    for(int i=0 ; i<cnt2 ; i++)
    {
        arr2[i] = B[i];
    }
    for(int i=0 ; i<cnt1 ; i++)
    {
        arr2[i+cnt2] = A[i];
    }

    for(int i=0 ; i<cnt1+cnt2 ; i++)
    {
        if(arr1[i] != arr2[i])
            idx = 1;
    }

    if(idx == 1)
        printf("false");
    else
        printf("true");



    return 0;
}