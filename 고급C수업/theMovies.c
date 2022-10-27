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
    // �¼� ���� ����
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

// �¼� ������ ������ ���� �����ϴ� �Լ�
int seatReservationCheck(char c)
{
    printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) : ");
    scanf(" %c", &c);
    if (c == 'y' || c == 'Y')
        return 1;
    printf("���α׷� ����\n");
    return 0;
}

// �¼� ��ȣ�� ���� �¼� ��Ȳ ��� �Լ�
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

// �¼� ���� �Լ�
void seatReservation(int seat[][SIZE])
{
    // �ִ� �¼� ���� ���ϱ�
    int seatNumber = 0;
    for (int i = 0; i < SIZE; i++)
        for (int ii = 0; ii < SIZE; ii++)
            if (seat[i][ii] == 0)
                seatNumber++;

    int reservationSeat = 0;
    printf("�� �¼� �����Ͻðڽ��ϱ�? : ");
    scanf("%d", &reservationSeat);
    if (seatNumber < reservationSeat)
    {
        printf("���� �¼����� ���� �¼��� ������ �� �����ϴ�\n");
        return;
    }
    for (int i = 0; i < reservationSeat; i++)
    {
        int index1 = 0, index2 = 0;
        printf("�� ��° �¼��� �����Ͻðڽ��ϱ�?(��,��) : ");
        scanf(" %d,%d", &index1, &index2);
        if (seat[index1 - 1][index2 - 1] == 1)
        {
            printf("���� ����� �¼��Դϴ�. �ٸ� �¼��� �����ϼ���\n");
            i--;
            continue;
        }
        seat[index1 - 1][index2 - 1] = 1;
        printf("����Ǿ����ϴ�.\n���� �¼� ��Ȳ\n");
        printSeat(seat);
    }
}
