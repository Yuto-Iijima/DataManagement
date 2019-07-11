#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(void){
    int a1,b1,sum=0,a3,b3;
    char name[8];
    int second;
    int i,sum2=0,sum3=0;
    srand(time(NULL));

a1=rand( ) %6 +1;
b1=rand( ) %6 +1;
sum = a1 + b1;

printf("What your name?? ->");
    scanf("%s",name);
    printf("Hello,%s !\n",name);

printf("Rolling tha dice...\n");
printf("Dice 1 value %d\n",a1);
printf("Dice 2 value %d\n",b1);
printf("Total value is %d\n",sum);

if(sum>7){
    printf("%s WON !\n",name);
    printf("Second Game! Plese push number from 1 to 6. \n->");
    scanf("%d",&second);
    printf("%d times Dise start\n",second);
    for(i=0;i<second;i++){
        a3=rand( ) %6 +1;
        b3=rand( ) %6 +1;
       printf("%d, Your value is %d  ",i+1,a3);
       printf("%d, AI value is %d\n",i+1,b3);
       sum2 += a3;
       sum3 += b3;
    }
    printf("Finish! your scour is %d\n",sum2);
    printf("AI score is %d\n",sum3);
    if(sum2 > sum3){
        printf("%s WON! YOU are strong!\n",name);
    }
    else if(sum2 == sum3){
        printf("It is a draw!\n");
    }
    else printf("%s LOST! Plese again!\n",name);
}
else {
    printf("%s LOST !\n",name);
    printf("If you win this game , you play new game! Plese again!\n");
}



return 0;
}
