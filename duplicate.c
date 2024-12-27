// Create a function to find duplicates from an array , Input = [1,2,1,3,4,2]; Output = [1,2];

#include <stdio.h>

void dupli(int arr[], int arr1[], int size)
{

    int index = 0;

    for (int i = 0; i < size; i++)
    {

        for (int j = i + 1; j < size; j++)
        {

            if (arr[i] == arr[j])
            {
                int isModified = 0;
                for (int k = 0; k < index; k++)
                {
                    if (arr1[k] == arr[i])
                    {
                        isModified = 1;
                        break;
                    }
                }
                if (!isModified)
                {
                    arr1[index++] = arr[i];
                }
            }
        }
    }

    printf("Duplicates: ");
    for (int i = 0; i < index; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
}

int main()
{

    int arr[] = {1, 2, 1, 3, 4, 2};
    int arr1[20];
    int size = sizeof(arr) / sizeof(arr[0]);

    dupli(arr,arr1,size);
}