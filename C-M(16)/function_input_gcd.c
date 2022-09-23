#include<stdio.h>

void printGCD(int x, int y){

while(y>0){
    int temp =x%y;
    printf("temp %d\n", temp);
    x=y;
     printf("x  %d\n", x);
    y=temp;
  printf("y %d\n", y);
}

int gcd = x;
printf("gcd %d\n", gcd);
}


int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    printGCD(n,m);
    }
