#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    int q;
    int len;

    scanf("%s%d",arr,&q);
    len = strlen(arr);

    for(int i=0 ; i<q ; i++)
    {
        int ques;
        scanf("%d",&ques);
        if(ques == 1)
        {
            int o,t;
            char temp;
            scanf("%d%d",&o,&t);
            temp = arr[o-1];
            arr[o-1] = arr[t-1];
            arr[t-1] = temp;
            printf("%s\n",arr);

        }
        if(ques == 2)
        {
            char a,b;
            scanf(" %c %c",&a,&b);

            for(int j =0 ; j<len ; j++)
            {
                if(arr[j]==a)
                {
                    arr[j] = b;
                }
            }
            printf("%s\n",arr);

        }
    }



    return 0;
}