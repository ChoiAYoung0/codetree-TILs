#include <stdio.h>

int main() {
    char arr[5][20] = {"apple","banana","grape","blueberry","orange"};
    char idx;
    int cnt=0;

    scanf("%c",&idx);

    for(int i=0 ; i<5 ; i++)
    {
        for(int j=2 ; j<4 ; j++)
        {
            if(arr[i][j] == idx)
            {
                printf("%s\n",arr[i]);
                cnt++;
                break;
            }
        }
    }
    printf("%d",cnt);


    return 0;
}