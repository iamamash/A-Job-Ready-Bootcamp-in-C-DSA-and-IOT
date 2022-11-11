#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
// gotoxy() helps to navigate to respected positions.
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// gotoab() helps to navigate to respected positions.
void gotoab(int a, int b)
{
    COORD c;
    c.X = a;
    c.Y = b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int M = 4, N = 4;
// checkWin() this will check the winning situation everytime whenever user press a key.
int checkWin(int matrix[M][N])
{
    int i, j;
    // our real matrix is to be matched with this matrix everytime this function is called.
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, ' '}};
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matrix[i][j] != arr[i][j])
            {
                return 1;
            }
            else
                continue;
        }
    }
    if (i == 4 && j == 4)
        return 0;
}

// matrix() contains the main logic of the game.
void matrix()
{
    int i, j, value, x = 24, y = 3, space = 32, chance = 15;
    int a = 29, b = 6;
    char ch;
    int arr[4][4] = {{10, 8, 9, 5}, {4, 3, 2, 6}, {7, 14, 13, 12}, {11, 15, 1, ' '}};
    printf("\n");
    system("cls");
    printf("\033[1;34m");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            if (arr[i][j] == ' ')
                printf("%c\t", arr[i][j]);
            else
                printf("%d\t", arr[i][j]);
        printf("\n");
    }
    printf("\033[0m");
    printf("\n\nHey Buddy :->\t Your moves: %d", chance);
    i = 3;
    j = 3;
    gotoxy(x, y);
    printf("\033[1;37m");
    while (1 && chance != 0)
    {
        // Taking key in 'ch' through getch() that user have pressed.
        ch = getch();
        switch (ch)
        {
        case 'a': // LEFT
            if (j != 3)
            {
                // Swapping of values.
                value = arr[i][j + 1];
                arr[i][j + 1] = arr[i][j];
                arr[i][j] = value;
                printf("%d", arr[i][j]);
                x = x + 8;
                gotoxy(x, y);
                printf("%c", arr[i][j + 1]);
                printf("%c", arr[i][j + 1]);
                x;
                gotoxy(x, y);
                j = j + 1;
                --chance;
                break;
            }
            else
            {
                break;
            }

        case 'd': // RIGHT
            if (j != 0)
            {
                // Swapping of values.
                value = arr[i][j - 1];
                arr[i][j - 1] = arr[i][j];
                arr[i][j] = value;
                printf("%d", arr[i][j]);
                x = x - 8;
                gotoxy(x, y);
                printf("%c", arr[i][j - 1]);
                printf("%c", arr[i][j - 1]);
                x;
                gotoxy(x, y);
                j = j - 1;
                --chance;
                break;
            }
            else
            {
                break;
            }

        case 'w': // UP
            if (i != 3)
            {
                // Swapping of values.
                value = arr[i + 1][j];
                arr[i + 1][j] = arr[i][j];
                arr[i][j] = value;
                printf("%d", arr[i][j]);
                ++y;
                gotoxy(x, y);
                printf("%c", arr[i + 1][j]);
                printf("%c", arr[i + 1][j]);
                y;
                gotoxy(x, y);
                i = i + 1;
                --chance;
                break;
            }
            else
            {
                break;
            }

        case 's': // DOWN
            if (i != 0)
            {
                // Swapping of values.
                value = arr[i - 1][j];
                arr[i - 1][j] = arr[i][j];
                arr[i][j] = value;
                printf("%d", arr[i][j]);
                --y;
                gotoxy(x, y);
                printf("%c", arr[i - 1][j]);
                printf("%c", arr[i - 1][j]);
                y;
                gotoxy(x, y);
                i = i - 1;
                --chance;
                break;
            }
            else
            {
                break;
            }

        case 27: // Condition to exit the game in between if pressed 'esc'.
            system("cls");
            exit(0);

        default:
            break;
        }
        // this will handle the decrement of moves everytime user presses a key.
        gotoab(a, b);
        if (chance == 9)
        {
            printf("%d", chance);
            a = 30;
            gotoab(a, b);
            printf("%c", space);
            a = 29;
        }
        else
            printf("%d", chance);
        // this will take the cursor to the respected position according to the key that user have pressed.
        gotoxy(x, y);
        if (checkWin(arr))
            continue;
        else
        {
            printf("\033[1;34m");
            printf("\t\t\t\tCongratulations you won :-)");
            printf("\033[0m");
            exit(0);
        }
    }
    printf("\033[0m");

    system("cls");
    printf("\033[1;35m");
    printf("\t\t\t\tYou ran out of moves :-(");
    printf("\033[0m");
    printf("\n");

    // ASKING PLAYER TO PLAY AGAIN
    printf("\033[1;37m");
    printf("Wanna play again ?\n");
    printf("If yes then press 'Y' or 'y'\n");
    printf("If no then press 'N' or 'n'\n");
    printf("\033[0m");

    char choice;
    choice = getch();
    if (choice == 121 || choice == 89)
        matrix();
    else
        exit(0);
}

// start() contains all printed stuff(statements, points, rules etc.).
int start()
{
    int i, j;
    char arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, ' '}};
    system("cls");
    char name[20];

    // TAKING NAME AS INPUT
    printf("Enter your good name:\n");
    fgets(name, 20, stdin);
    system("cls");

    // MATRIX PUZZLE HEADING
    printf("\033[1;35m");
    printf("\t\t\t\t  MATRIX PUZLE\n");
    printf("\033[0m");
    printf("\n");

    // RULES HEADING
    printf("\033[1;32m");
    printf("\t\t\t\tRULES OF THIS GAME\n");
    printf("\033[0m");
    printf("\n");

    // 1. POINT
    printf("\033[1;33m");
    printf("1. You can move only 1 step at a time by the keys mentioned below:\n");
    printf("\033[0m");

    // ABOUT KEYS
    printf("\033[1;37m");
    printf("\t\t\tMOVE UP:\tby pressing 'W' key\n");
    printf("\t\t\tMOVE DOWN:\tby pressing 'S' key\n");
    printf("\t\t\tMOVE RIGHT:\tby pressing 'D' key\n");
    printf("\t\t\tMOVE LEFT:\tby pressing 'A' key\n");
    printf("\033[0m");

    // 2, 3 & 4 POINTS
    printf("\033[1;33m");
    printf("2. You can move numbers at empty position only.\n");
    printf("3. For each valid move, your total number of moves will be decreased by 1.\n");
    printf("4. Winning Situation: Numbers in 4x4 matrix should be in order from 1 to 15. \n");
    printf("\033[0m");
    printf("\n");

    // WINNING MATRIX MODAL
    printf("\033[1;36m");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (arr[i][j] != 32)
                printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\033[0m");
    printf("\n");

    // 5. POINT
    printf("\033[1;33m");
    printf("5. You can exit the game at any time by pressing 'esc' key.\n");
    printf("So try to win in minimum no of moves.\n");
    printf("Press Enter to start the game\n");
    printf("Good Luck :-)\n");
    printf("\033[0m");

    char ch;
    ch = getch();
    if (ch == 13)
        return 1;
}

// Main function.
int main()
{
    system("cls");
    if (start())
        matrix();
    return 0;
}