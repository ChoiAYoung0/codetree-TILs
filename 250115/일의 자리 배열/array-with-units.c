#include <stdio.h>

int main() {
    int arr[2];
    int p;
    
    for(int i=0 ; i<2 ; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d %d", arr[0], arr[1]);
    
    for(int i=0 ; i<8 ; i++) {
        
        
        if(arr[0]+arr[1]>=10)
        {
            p = (arr[0]+arr[1])%10;
            printf(" %d",p);
        }
        else
        {
            p = arr[0]+arr[1];
            printf(" %d",p);
        }
        arr[0] = arr[1];
        arr[1] = p;

    }

    return 0;
}
