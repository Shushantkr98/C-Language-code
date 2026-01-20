#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_MOVES 120

void showUsers() {
    FILE *fp;
    char data[100];

    fp = fopen("users.txt", "r");
    if (fp == NULL) {
        printf("No existing users found.\n");
        return;
    }

    printf("\nExisting Users:\n");
    while (fgets(data, sizeof(data), fp)) {
        printf("- %s", data);
    }
    fclose(fp);
}

void saveUser(int id, char username[]) {
    FILE *fp = fopen("users.txt", "a");
    if (fp != NULL) {
        fprintf(fp, "ID: %d  Name: %s\n", id, username);
        fclose(fp);
    }
}

int checkWin(int puzzle[]) {
    int i;
    for (i = 0; i < 15; i++) {
        if (puzzle[i] != i + 1)
            return 0;
    }
    return 1;
}


void display(int puzzle[], int moves, int id, char username[]) {
    int i;
    system("cls");

    printf("====== PUZZLE GAME ======\n");
    printf("Player ID : %d\n", id);
    printf("Player Name : %s\n", username);
    printf("Moves Left: %d\n\n", MAX_MOVES - moves);

    for (i = 0; i < 16; i++) {
        printf("| ");
        if (puzzle[i] == 0)
            printf("  ");
        else
            printf("%2d", puzzle[i]);
        printf(" ");

        if ((i + 1) % 4 == 0) {
            printf("|\n");
            printf("-------------------------\n");
        }
    }

    printf("\nUse Arrow Keys (Q to Quit)\n");
}

int main() {

    char username[50];
    int userid;  
    int puzzle[16] = {1,3,4,5,6,2,7,0,8,9,10,11,12,13,14,15};
    int poszero, moves = 0;
    char ch;
    int i;

    printf("====== PUZZLE GAME ======\n");
    showUsers();

    printf("\nEnter your ID: ");
    scanf("%d", &userid);

    printf("Enter your name: ");
    scanf("%s", username);

    saveUser(userid, username);

    printf("\nWelcome %s (ID: %d)! Press any key to start...", username, userid);
    getch();

    while (1) {

        display(puzzle, moves, userid, username);

        if (checkWin(puzzle)) {
            printf("\n?? YOU WIN, %s (ID: %d)! ??\n", username, userid);
            break;
        }

        if (moves >= MAX_MOVES) {
            printf("\n? GAME OVER! MOVE LIMIT REACHED ?\n");
            break;
        }

        ch = getch();
        if (ch == 0 || ch == 224)
            ch = getch();

        for (i = 0; i < 16; i++)
            if (puzzle[i] == 0)
                poszero = i;

        if (ch == 72 && poszero >= 4) {
            puzzle[poszero] = puzzle[poszero - 4];
            puzzle[poszero - 4] = 0;
            moves++;
        }
        else if (ch == 80 && poszero < 12) {
            puzzle[poszero] = puzzle[poszero + 4];
            puzzle[poszero + 4] = 0;
            moves++;
        }
        else if (ch == 75 && poszero % 4 != 0) {
            puzzle[poszero] = puzzle[poszero - 1];
            puzzle[poszero - 1] = 0;
            moves++;
        }
        else if (ch == 77 && poszero % 4 != 3) {
            puzzle[poszero] = puzzle[poszero + 1];
            puzzle[poszero + 1] = 0;
            moves++;
        }
        else if (ch == 'q' || ch == 'Q') {
            break;
        }
    }

    printf("\nThank you for playing PUZZLE GAME!\n");
    return 0;
}

