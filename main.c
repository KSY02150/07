//전역변수//
#include <stdio.h>
void f(void); //함수선언
//수정버전(지역변수로 하기)
int main(void)
{
    int i;
    for(i=0;i<5;i++)
    {
        f(); 
    }
    return 0;
}

void f(void)
{
    int i;
    for(i=0;i<10;i++)
        printf("#");
} 