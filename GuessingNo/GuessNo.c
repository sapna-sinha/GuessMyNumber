#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses=5,count=1;
    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 and 100
    // printf("The number is %d\n", number);
    // Keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
         if(nguesses<1){
            printf("You Loose...Better Luck Next time.");
            break;
        }
        int a= nguesses-1;
        if(guess>number){
            printf("Lower number please!..%d attempt is left\n",a);
        }
        else if(guess<number){
            printf("Higher number please!..%d attempt is left\n",a);
        }
        else{
            printf("You guessed it in %d attempts\n", count);
        }
        nguesses--;
        count++;
    }while(guess!=number);
    
    return 0;
}
