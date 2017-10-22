#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    printf("***********************************************************\n");
    printf("**----------------Welcome to Guessing Game---------------**\n");
    printf("**---------You can guess if you understand the MATH -----**\n");
    printf("**---------------------------------------------------------\n");
    printf("\n\n");
    const int MAX_CHANCES = 7;
    int computer_guess;
    long seed = time(NULL);
    srand(seed);
    
    computer_guess = rand() % 100;
    
    printf("Program has guessed a number, what you need to do is match it.\n");
    printf("Remember, you have only 7 chances.\n");
    printf("Best wishes...\n\n");
//    printf("%d\n",computer_guess);
   int chance_count = 1;
    int match = 0;
    int user_guess;
    int chances_left;
        while((computer_guess != match)&&chance_count<=MAX_CHANCES){
        /*as long as match is false and chances are <= MAX_CHANCES*/
            printf("Enter your guess: ");
            scanf("%d",&user_guess);//Gets the input from the user.
            //******Calculates the Total number of chances of left *******//
            chances_left=MAX_CHANCES-chance_count;
            //************* Incrementing the count ***********//
           
            if(user_guess > computer_guess){
                printf("Your Guess is high\n");
            }
            else if(user_guess < computer_guess){
                printf("Your Guess is low\n");
            }
             else{
                  if((user_guess==computer_guess)&& (chances_left>3 && chances_left<=6)){
                     printf("You are Super Duper NINJA!\n");
                      printf("You guessed that in %d chances\n",chance_count);
                     break;
                 }
                  else if((user_guess == computer_guess)&& (chances_left>2 && chances_left<=3)){
                      printf("You are Crezy NINJA!\n");
                      printf("You guessed that in %d chances\n",chance_count);
                      break;
                  }else if ((user_guess == computer_guess)&& (chances_left>0 && chances_left<=2)){
                      printf("You have potential to be a NINJA!\n");
                      printf("You guessed that in %d chances\n",chance_count);
                      break;
                  
                  }
                 
                 }
            
            chance_count++;
            printf("No.of chances left: %d\n",chances_left);
        }
    if(chance_count==MAX_CHANCES+1){
     printf("Game over, Try to be Mathemetical.\n ");
    }else if(computer_guess == match){
        printf("Game over\n");
    }else{
        printf("Game over.\n");
    }

    return 0;
}

