#include <stdio.h>

int main()
{
    int arr[50];
    int size = 5;
    int ele, pos;
    // ------------------------------------------------------------------------------------------
    // // in the last position

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Enter %d value: ", i);
    //     scanf("%d", &arr[i]);
    // }

    // printf("Enter the value to insert: ");
    // scanf("%d", &ele);
    // arr[size] = ele;
    // size++;

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d,", arr[i]);
    // }

    // -----------------------------------------------------------------------------------------

    // in the first position

    // for (int i = 0; i < size; i++)
    // {
    //     printf("Enter %d value: ", i);
    //     scanf("%d", &arr[i]);
    // }

    // printf("Enter the value to insert: ");
    // scanf("%d", &ele);

    // for (int i = size-1; i >=0; i--)
    // {
    //     arr[i+1]=arr[i];
    // }

    // arr[0]=ele;
    // size++;

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d,", arr[i]);
    // }

    // -----------------------------------------------------------------------------------------------

    // in the specific position

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d value: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &ele);
    printf("Enter the position to insert");
    scanf("%d", &pos);

    for (int i = size - i; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = ele;
    size++;

    for (int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
}