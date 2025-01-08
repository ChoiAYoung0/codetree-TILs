#include <stdio.h>

int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    while(1)
    {
        
        if(n%2==0)
        {
            n = n/2;
            count++;
            if(n==1)
                break;
        }
        else if(n==1)
            break;
        else if(n%2==1)
        {
            n = n*3 +1;
            count++;
            if(n==1)
                break;
        }
    }
    printf("%d",count);
}