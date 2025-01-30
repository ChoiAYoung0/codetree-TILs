#include <stdio.h>
#include <string.h>

int main() {
    char arr[1001];
    int q;
    int len;

    scanf("%s%d",arr,&q);
    len = strlen(arr);


    for(int i=0 ; i<q ; i++)
    {
        int num;
        scanf("%d",&num);
        if(num==1)
        {
            char temp;
            temp = arr[0];
            for(int j=0 ; j<len-1 ; j++)
            {
                arr[j] = arr[j+1];
            }
            arr[len-1] = temp;
            printf("%s\n",arr);
        }
        else if(num==2)
        {
            char temp;
            temp = arr[len-1];
            for(int j=len-1 ; j>0 ; j--)
            {
                arr[j] = arr[j-1];
            }
            arr[0] = temp;
            printf("%s\n",arr);
        }
        else if(num == 3)
        {
            char temp;
            for(int i=0 ; i<len/2 ; i++)
            {
                temp = arr[i];
                arr[i] = arr[len-i-1];
                arr[len-i-1] = temp;
            }
            printf("%s\n",arr);
        }
    }



    return 0;
}