//연결: 코드 실행 후 결과 확인//
#include <stdio.h>
int all_files; //전역변수선언

extern void sub(); //외부함수호출

int main(void)
{
    sub();
    printf("%d\n", all_files);
    
    return 0;
}
