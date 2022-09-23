#include <stdio.h>

//[5 4 5 4 ] = 5
int main()
{
    int users;
    scanf("%d", &users);

    int ratings[users];

    for (int i = 0; i < users; i++)
    {
        scanf("%d", &ratings[i]);
    }

    int sum = 0;

    for (int i = 0; i < users; i++)
    {
        sum += ratings[i];
    }

    double avg = (double)(sum) / (double)(users);
    printf("avg = %0.2lf\n", avg);

    // for(int val =1; val<=5; val++)
    // {
    //     int count = 0;

    //     for(int i=0; i<users; i++)
    //     {
    //         if(ratings[i] == val){
    //             count++;
    //         }
    //     }
    //     printf("%d -> %d\n", val, count);
    // }

    // int count[6];

    int count[6] = {0};

    // count[1] = 1
    // count[2]
    // count[3] = 2
    // count[4] = 2
    // count[5] 
    
    for (int i = 0; i < users; i++) //// 5  ratings=[1,3,3,4,4]
    {
        int x = ratings[i]; //[3]
        count[x]++; // count[3]
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("%d -> %d \n", i, count[i]);
    }
}
