#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for(int j=1; j<10; j++)
    {
        for(int i=b ; i>= a ; i-=2)
        {
            printf("%d * %d = %d",i,j,i*j);
            if(i>2)
                printf(" / ");
        }
        printf("\n");
    }
    return 0;
}