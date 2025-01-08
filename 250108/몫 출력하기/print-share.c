#include <stdio.h>

int main() {
    int n;
    int count=0;

    while(1)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("%d\n",n/2);
            count++;
            if(count==3)
                break;
        }

        
    }

    return 0;
}