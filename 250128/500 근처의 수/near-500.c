#include <stdio.h>

int main() {
    int min[10] = {0,},max[10] = {0,};
    int j=0, k=0;
    int max1, min1;


    for(int i=0 ; i<10 ; i++)
    {
        int n;
        scanf("%d",&n);
        if(n<500)
        {
            max[j] = n;
            j++;
        }
        else
        {
            min[k] = n;
            k++;
        }
    }


    max1 = max[0];
    min1 = min[0];

    for(int i=0 ; i<10 ; i++)
    {
        if(max[i]>max1)
        {
            max1 = max[i];
        }
    }

    for(int i=0 ; i<10 ; i++)
    {
        if(min[i]<min1 && min[i]!=0)
        {
            min1 = min[i];
        }
    }



    printf("%d %d",max1,min1);


    return 0;
}