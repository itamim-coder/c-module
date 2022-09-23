#include <stdio.h>

int main()
{
    // garbage value
    // int pages[5]= {1,2,3,4,5,6};

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", pages[i]);
    // }

    // part 2

    // double pages1[] = {1, 2, 3};
    // double pages2[4] = {1, 2, 3, 4};
    // double pages3[5] = {1, 2, 3};

    // int size = sizeof(pages3) / sizeof(pages3[0]);
    // printf("%d\n", size);
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%0.2lf\n", pages3[i]);
    // }

    // part 3

    char a[] = {"hello"};
    int size = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < size; i++)
    {
        putchar(a[i]);
    }
}