#include <stdio.h>

int main() {
    int n;
    int max;
    scanf("%d",&n);
    scanf("%d",&max);
    for(int i=0 ; i<n-1 ; i++)
    {
        int j;
        scanf("%d",&j);
        if(max==j)
            max = -1;
        else if(max<j)
            max = j;
        
    }
    printf("%d",max);
    return 0;
}