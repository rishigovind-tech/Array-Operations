#include<stdio.h>

int main(){

    char alpha[]={'h','e','l','l','o'};

    char string[5]; 

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d character : ", i);
        scanf(" %c",&string[i]);
    }

    for (int i = 0; i < 5; i++)

    {
        
        printf("%c,",string[i]);
    }
    
    


    // int size=sizeof(string)/sizeof(string[0]);

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%c,", string[i]);
    // }
    

}