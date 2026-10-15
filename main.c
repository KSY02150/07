//지역 변수 생존기간//
#include <stdio.h>

int main(void)
{
    int i;

    for (i=0;i<5;i++)
    {
        int temp =1; //temp가 항상 1로 초기화됨
        printf("temp= %d\n", temp);
        temp++;
    }
    return 0;
}