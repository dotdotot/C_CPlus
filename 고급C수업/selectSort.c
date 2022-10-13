// 선택 정렬
#include <stdio.h>

void selectSort(int arr[], int check);
int main()
{
    // 정수형 배열 생성(size 10)
    int arr[10];

    // 배열 초기화
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int desc = 0;
    printf("오름차순 : 1 | 내림차순 : 0 : ");
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