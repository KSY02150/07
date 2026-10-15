//매개변수는 일종의 지역변수이다//
#include <stdio.h>

int inc(int counter); //함수선언

int main(void)
{
    int i =10;
    printf("before function i=%d\n", i);
    i = inc(i); //이렇게하면 i가 수정됨
    printf("after function i=%d\n", i);
    return 0;
}
int inc(int counter)
{
    counter++;
    return counter;
}