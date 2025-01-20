#include <stdio.h>
#include <string.h>

int main() {
    char A[101],B[101];
    char temp;
    int len,lenB;

    scanf("%s%s",A,B);
    len = strlen(A);
    lenB = strlen(B);

    for(int i=0 ; i<lenB ; i++)
    {
        if(B[i]=='L')
        {
            temp = A[0];
            for(int i=0 ; i<len-1 ; i++)
            {
                A[i] = A[i+1];
            }
            A[len-1] = temp;
        }
        if(B[i]=='R')
        {
            temp = A[len-1];
            for(int i=len-1 ; i>0 ; i--)
            {
                A[i] = A[i-1];
            }
            A[0] = temp;
        }
    }


    printf("%s",A);
    
    


}