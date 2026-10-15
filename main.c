//static 활용//
#include <stdio.h>
void sub(void); //함수선언

int main(void)
{
    int i;
    for (i=0;i<3;i++)
        sub();
    return 0;
}

void sub(void)
{
    int auto_count =0;
    static int static_count =0;
    auto_count++;
    static_count++;
    printf("auto_count=%d\n", auto_count);
    printf("static_count=%d\n", static_count);
} //이러면 auto는 계속 초기화되지만 static은 값이 유지됨