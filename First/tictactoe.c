// Importing all necessary libraies
#include <stdio.h>
#include <stdlib.h>

char square [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int player, choice;
void displayboard();

int checkwin(){
    if ((square[1] == square[2] && square[2] == square[3]) ||
        (square[4] == square[5] && square[5] == square[6]) ||
        (square[7] == square[8] && square[8] == square[9]) ||
        (square[1] == square[5] && square[5] == square[9]) ||
        (square[3] == square[5] && square[5] == square[7]) ||
        (square[1] == square[4] && square[4] == square[7]) ||
        (square[2] == square[5] && square[5] == square[8]) ||
        (square[3] == square[6] && square[6] == square[9])) {
        displayboard();
        printf("You win");
        return 1; // Indicates a win
    }
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
            && square[4] != '4' && square[5] != '5' && square[6] != '6' 
            && square[7] != '7' && square[8] != '8' && square[9] != '9'){
        return 0; 
        // Indicates a draw
    }
    else 
    return -1;
    // Indicates Game in progress
};
void displayboard(){
    printf("\033[H\033[J");
    printf("\n\n\n\t Tic Tac Toe \n\n");
    printf("Player 1 (X) - Player 2 (O)\n\n");
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n", square[1], square[2], square[3]);
    printf("_______|_______|_______\n");
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n", square[4], square[5], square[6]);
    printf("_______|_______|_______\n");
    printf("       |       |       \n");
    printf("   %c   |   %c   |   %c   \n", square[7], square[8], square[9]);
    printf("       |       |       \n");
};
void markboard(char mark){
    if(choice == 1 && square[1] == '1')
        square[1] = mark;
    else if (choice == 2 && square[2] == '2')
        square[2] = mark;
    else if (choice == 3 && square[3] == '3')
        square[3] = mark;
    else if (choice == 4 && square[4] == '4')
        square[4] = mark;
    else if (choice == 5 && square[5] == '5')
        square[5] = mark;
    else if (choice == 6 && square[6] == '6')
        square[6] = mark;
    else if (choice == 7 && square[7] == '7')
        square[7] = mark;
    else if (choice == 8 && square[8] == '8')
        square[8] = mark;
    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else {
        printf("Invalid move");
        player --;
        getchar();
    }
    
};

int main(){
    int gamestatus;
    char mark;
    player = 1;
    do{
        displayboard();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';
        markboard(mark);

        gamestatus = checkwin();
        player ++;
    } while(gamestatus == -1);

}