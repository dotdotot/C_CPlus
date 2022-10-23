// 일반 정수형 변수를 하나 선언하고 임의의 값으로 초기화하라
// 그리고 정수형 포인터 변수가 해당 값을 가리키게 만들어라
#include <stdio.h>
int main()
{
    int i;
    int *pi = &i;

    scanf("%d", *(pi));

    printf("%d", i);
    return 0;
}