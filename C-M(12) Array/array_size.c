#include <stdio.h>

int main()
{
    const int n = 5;
    int pages[n];    

    // for(int i=0; i<5; i++){
    //     printf("Enter word for page %d \n", i+1);
    //     scanf("%d", &pages[i]);
    // }

    //  for(int i=0 ; i<5; i++){
    //     printf("page %d have %d word\n", i+1, pages[i]);
    // }

    // part 2

    // for (int i = 0; i < n; i++)
    // {
    //     pages[i] = i + 1;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("page index %d have %d word\n", i, pages[i]);
    // }

    // part 3

    int values[10];
    // double a=8;
    // printf("%d", sizeof(values));
    printf("%d", sizeof(values)/sizeof(values[0]));
}