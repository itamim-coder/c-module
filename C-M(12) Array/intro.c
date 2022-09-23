#include <stdio.h>

int main()
{
    int std1, std2, std3;

    // printf("Enter student 1 mark ");
    // scanf("%d", &std1);

    // printf("Enter student 2 mark ");
    // scanf("%d", &std2);

    // printf("Enter student 3 mark ");
    // scanf("%d", &std3);

    // printf("student 1 mark %d\n", std1);
    // printf("student 2 mark %d\n", std2);
    // printf("student 3 mark %d\n", std3);


    int mark[5];

    for(int i=0; i<5; i++){

        printf("Enter mark for student %d \n", i+1);
        scanf("%d", &mark[i]);

    }

    for(int i=0 ; i<5; i++){

        printf("student %d got %d mark\n", i+1, mark[i]);
     
    }
}