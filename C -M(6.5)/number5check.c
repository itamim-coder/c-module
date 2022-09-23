#include<stdio.h>

int main(){
int numOne, numTwo;
  scanf("%d %d", &numOne, &numTwo);

  int sum = numOne + numTwo;
   int differenceOne = numOne -numTwo;
   int differenceTwo = numTwo - numOne;


    if (numOne == 5 | numTwo == 5){
    printf("one of input is 5: %d %d\n", numOne, numTwo );

}
else if(sum==5){
        printf("Sum is 5");

}
else if( numOne> numTwo && differenceOne == 5 ){

 printf("differnce 5");
}
else if(numTwo>numOne &&  differenceTwo == 5){

    printf("differnce 5");

}
else{
    printf("No 5");

}



return 0;
}


