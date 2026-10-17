//연결: 코드 실행 후 결과 확인//
#include <stdio.h>
static int all_files;

extern void sub();

int main(void)
{
    sub();
    printf("%d\n", all_files);
    return 0;
}
