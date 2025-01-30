#include <stdio.h>
#include <string.h>

int main() {
    char A[101],B[101];
    int len_A,len_B;
    int j,i=0;


    scanf("%s%s",A,B);

    len_A = strlen(A);
    len_B = strlen(B);

    while(A[i]!='\0')
    {
        
            //일단 같은 문자 하나 있는지 확인
            if(A[i]==B[0])
            {
                //문자 하나 같으면 전체 비교 시작
                for(j=0 ; j<len_B ; j++)
                {
                    if(A[i+j]==B[j])
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                //다 같으면 삭제 시작
                if(j==len_B)
                {
                    for(int k=i ; A[k+len_B]!='\0' ; k++)
                    {
                        A[k] = A[k+len_B];
                    }
                    A[len_A-len_B] = '\0';
                    len_A = len_A-len_B;
                    i = 0;
                }
                //다르면 다시 비교 시작
                else
                {
                    i++;
                    continue;
                }
            }
            else
                i++;
    }


    printf("%s",A);
    



    return 0;
}