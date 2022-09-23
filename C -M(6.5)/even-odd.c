#include<stdio.h>

int main(){

int input;
scanf("%d", &input);

for(int i=1; i<=input; i++){

    if(i%2==0){
    printf("%d even\n ", i);
}
else{
    printf("%d Odd\n", i);
}

}


}

