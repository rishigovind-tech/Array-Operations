#include<stdio.h>

int main(){

    int number[]={12,4,6,7,8,9};
    int size=sizeof(number)/sizeof(number[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d,",number[i]);
    }
    

}