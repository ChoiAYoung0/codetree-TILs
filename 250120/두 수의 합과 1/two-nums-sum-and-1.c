#include <stdio.h>

int main() {
    int a,b;
    char sum[1001];
    int cnt=0;

    scanf("%d%d",&a,&b);
    
    sprintf(sum,"%d",a+b);
   
    for(int i=0 ; sum[i]!='\0' ; i++)
    {
        if(sum[i]=='1')
            cnt++;
    }

    printf("%d",cnt);

    
    return 0;
}