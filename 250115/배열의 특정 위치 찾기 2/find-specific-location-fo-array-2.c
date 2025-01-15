#include <stdio.h>

int main() {
    int arr[10];
    int evensum=0,oddsum=0;
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",&arr[i]);
        if(i%2!=0)
        {
            evensum += arr[i];
        }
        else
        {
            oddsum += arr[i];
        }
    }
    if(evensum>=oddsum)
    {
        printf("%d",evensum-oddsum);
    }
    else
    {
        printf("%d",oddsum-evensum);
    }
    return 0;
}