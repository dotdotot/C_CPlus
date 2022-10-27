#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int seatReservationCheck(char c);
void printSeat(int seat[][SIZE]);
void seatReservation(int seat[][SIZE]);

int main()
{
    srand(time(NULL));
    // 좌석 랜덤 배정
    int seat[SIZE][SIZE] = {{0}};
    for(int i = 0; i <SIZE;i++)
        for(int ii=0;ii<SIZE;ii++)
            seat[i][ii] = rand() % 2;
    char commend;
    while (1)
    {
        if (seatReservationCheck(commend))
        {
            printSeat(seat);
            seatReservation(seat);
            continue;
        }
        break;
    }

    return 0;
}

// 좌석 예약을 받을지 말지 결정하는 함수
int seatReservationCheck(char c)
{
    printf("좌석을 예약하시겠습니까?(y 또는 n) : ");
    scanf(" %c", &c);
    if (c == 'y' || c == 'Y')
        return 1;
    printf("프로그램 종료\n");
    return 0;
}

// 좌석 번호와 현재 좌석 상황 출력 함수
void printSeat(int seat[][SIZE])
{
    printf("++++------------------------------\n++++");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%2d ", i + 1);
    }
    printf("\n++++------------------------------\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("|%2d|", i + 1);
        for (int ii = 0; ii < SIZE; ii++)
        {
            printf("%2d ", seat[i][ii]);
        }
        printf("\n");
    }
}

// 좌석 예약 함수
void seatReservation(int seat[][SIZE])
{
    // 최대 좌석 개수 구하기
    int seatNumber = 0;
    for (int i = 0; i < SIZE; i++)
        for (int ii = 0; ii < SIZE; ii++)
            if (seat[i][ii] == 0)
                seatNumber++;

    int reservationSeat = 0;
    printf("몇 좌석 예약하시겠습니까? : ");
    scanf("%d", &reservationSeat);
    if (seatNumber < reservationSeat)
    {
        printf("현재 좌석보다 많은 좌석은 예약할 수 없습니다\n");
        return;
    }
    for (int i = 0; i < reservationSeat; i++)
    {
        int index1 = 0, index2 = 0;
        printf("몇 번째 좌석을 예약하시겠습니까?(행,열) : ");
        scanf(" %d,%d", &index1, &index2);
        if (seat[index1 - 1][index2 - 1] == 1)
        {
            printf("현재 예약된 좌석입니다. 다른 좌석을 선택하세요\n");
            i--;
            continue;
        }
        seat[index1 - 1][index2 - 1] = 1;
        printf("예약되었습니다.\n현재 좌석 상황\n");
        printSeat(seat);
    }
}
