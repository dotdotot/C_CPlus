#include <stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE] = {1, 2, 5, 4, 6, 7, 10, 14, 17, 3};

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                int swp = arr[i];
                arr[i] = arr[j];
                arr[j] = swp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}