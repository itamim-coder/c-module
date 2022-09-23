#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int fibonacci[n];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i=2; i<n; i++)
    {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

      for(int i=0; i<n; i++)
    {
        printf(" %d\n", fibonacci[i]);
        // printf("%d + %d = %d\n",fibonacci[i-1],fibonacci[i-2], fibonacci[i]);
    }

}


//[0, ১, ১, ২, ৩, ৫, ৮, ১৩, ২১]......
//i 0 1  2 