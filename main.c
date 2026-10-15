//전역변수 선언//
#include <stdio.h>
int counter;
//별도의 초기 할당이 없는 경우 0으로 초기화
void set_counter()
{
    counter=20;
}
int main(void)
{
    printf("counter=%d\n", counter);
    set_counter();
    printf("counter=%d\n", counter);
    return 0;
}