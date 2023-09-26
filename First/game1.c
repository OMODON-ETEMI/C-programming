#include <stdio.h>
#include <stdlib.h>

        printf("\t ------ Welcome to guess the number game ------ \n");
        srand(time(NULL));
        int random = (rand()%20) + 1;
        for(int i = 5; i >= 0; i--){
            int guess;
            printf("You have %d, tries left\n" ,i);
            printf("Enter a guess: ");
            scanf("%d", &guess);
            if(i == 0 ){
                printf("Sorry you lost try again");
            }
            if(random == guess){
                printf("Congratulations you have won!!");
                break;
            }
            else {
                if (guess > random){
                    printf("Your guess is too high\n");
                }
                if (guess < random){
                    printf("Your guess is too low\n");
                }
            }
        }