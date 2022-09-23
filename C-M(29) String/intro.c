// 2
// '2'
// "2"

#include <stdio.h>

int main()
{
    // char arr[5] = { 'a',
    //                 'b',
    //                 'c',
    //                 'd',
    //                 'e' };
    char arr[6] = "abcde\0";  //6 null  

    for (int i = 0; i < 5; i++)
    {
        printf("%c ", arr[i]);
    }
}