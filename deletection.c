
#include <stdio.h>

int main()
{

    int arr[50] = {1, 5, 7, 4, 6};

    int size = 5;
    int pos;

    // last element delete

    // size--;

    

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d,", arr[i]);
    // }

    // any position

    printf("Enter the position of element to delete");
    scanf("%d", &pos);

    for (int  i = pos; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }

    size--;

    for (int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }

    // // first element

    // for (int i = 0; i < size; i++)
    // {
    //     arr[i] = arr[i + 1];
    // }

    // size--;

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d", arr[i]);
    // }
}