// ���� ����
#include <stdio.h>

void selectSort(int arr[], int check);
int main()
{
    // ������ �迭 ����(size 10)
    int arr[10];

    // �迭 �ʱ�ȭ
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int desc = 0;
    printf("�������� : 1 | �������� : 0 : ");
    scanf("%d", &desc);

    selectSort(arr, desc);

    printf("select sort end\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}

void selectSort(int arr[], int desc)
{
    if (desc)
    {
        for (int i = 0; i < 9; i++)
        {
            int min = arr[i];
            int index = i;
            for (int j = i + 1; j < 10; j++)
            {
                if (min > arr[j])
                {
                    min = arr[j];
                    index = j;
                }
            }
            // swp
            int swp = arr[i];
            arr[i] = arr[index];
            arr[index] = swp;
        }
    }
    else
    {
        for (int i = 0; i < 9; i++)
        {
            int max = arr[i];
            int index = i;
            for (int j = i + 1; j < 10; j++)
            {
                if (max < arr[j])
                {
                    max = arr[j];
                    index = j;
                }
            }
            // swp
            int swp = arr[i];
            arr[i] = arr[index];
            arr[index] = swp;
        }
    }
}