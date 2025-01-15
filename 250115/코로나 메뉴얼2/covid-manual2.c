#include <stdio.h>

int main() {
    char yn[3];
    int temp[3];
    int A=0,B=0,C=0,D=0;
    for(int i=0 ; i<3 ; i++)
    {
        scanf("%c %d", &yn[i], &temp[i]);  
        getchar();
        if(yn[i]=='Y')
        {
            if(temp[i]>=37)
                A++;
            else
                C++;
        }
        else
        {
            if(temp[i]>=37)
                B++;
            else
                D++;
        }
    }
    printf("%d %d %d %d",A,B,C,D);
    if(A>=2)
        printf(" E");
    return 0;
}