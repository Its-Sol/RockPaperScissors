/*Create a loop and only run it if wins or loses < 3
Make computer choose any of the three options
Check for input and compare to see if player wins
Handle errors and invalid inputs from user
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int wins = 0; 
    int loses = 0;
    char answer[7];
    char cpu[7];

    srand(time(NULL));
    while(wins < 3 && loses < 3)
    {printf("Loses: %d\n" "Wins: %d\n", loses, wins);
    int rng = rand()%3;

    printf("Choose between rock paper or scissors: ");
    scanf("%s", &answer);

    if (rng == 0){
        strcpy(cpu, "paper");
    }
    else if (rng == 1){
        strcpy(cpu, "scissor");
    }
    else{
        strcpy(cpu, "rock");
    }

    printf("You chose %s. Cpu chose %s.\n", answer, cpu);

    if (strcmp(cpu, answer) == 0){
        printf("It's a draw\n");
        continue;
    }
    else if ((strcmp(cpu, "rock") == 0 && strcmp(answer, "paper") == 0) ||
    (strcmp(cpu, "paper") == 0 && strcmp(answer, "scissor") == 0) ||
    (strcmp(cpu, "scissor") == 0 && strcmp(answer, "rock") == 0)){
        printf("You won this round!\n");
        wins++;
    }
    else{
        printf("You lost this round.\n");
        loses++;
    }
    if (wins == 3){
        printf("You won!");
        break;
    if (loses == 3){
        printf("You lost!");
    }
    }
    }
return 0;
}

