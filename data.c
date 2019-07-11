#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(void){
    int a1,b1,sum=0;
    srand(time(NULL));

a1=rand( ) %6 +1;
b1=rand( ) %6 +1;
sum = a1 + b1;

printf("Rolling tha dice...\n");
printf("Dice 1 value %d\n",a1);
printf("Dice 2 value %d\n",b1);
printf("Total value is %d\n",sum);

return 0;
}
