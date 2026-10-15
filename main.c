//전역변수와 코드컴파일오류 수정//
#include <stdio.h>

int main(void)  //수정 코드
{
    int flag=1;

    while(flag !=0)
    {
        int y;   //y를 while문 안에서만 사용
        y = 3;
        flag = 0;
    }
    return 0;
}  