// 0--a
// 1--b
// 2--c
// .
// .
// 25--z
//a - 97 - 97 = 0

#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100];
    scanf("%s", &ar); // abab
    int counter[26] = {0};
    for (int i = 0; i < strlen(ar); i++)
    {
        char value = ar[i]; 
        counter[value-97]++;
    }
    
    for(char value='a'; value='z'; value++)
    {
        if(counter[value-97]>0)
        {
            printf("Value-> %c count-> %d\n", value, counter[value-97]);
        }
    }
}
