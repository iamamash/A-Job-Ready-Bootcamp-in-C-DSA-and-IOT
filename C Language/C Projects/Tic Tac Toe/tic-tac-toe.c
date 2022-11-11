#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
// gotoxy helps us to move around the screen to print 'X' or 'O'.
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// winGame will check for the winning situation for 2 players game everytime user presses a key.
int winGame(char arr[3][3], char name1[], char name2[])

{
    while (1)
    {
        while (1)
        {
            // This will check for [1, 2, 3].
            if (arr[0][0] == arr[0][1] && arr[0][0] == arr[0][2])
            {
                if (arr[0][0] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [4, 5, 6].
            if (arr[1][0] == arr[1][1] && arr[1][0] == arr[1][2])
            {
                if (arr[1][0] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [7, 8, 9].
            if (arr[2][0] == arr[2][1] && arr[2][0] == arr[2][2])
            {
                if (arr[2][0] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [1, 4, 7].
            if (arr[0][0] == arr[1][0] && arr[0][0] == arr[2][0])
            {
                if (arr[0][0] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [2, 5, 8].
            if (arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1])
            {
                if (arr[0][1] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [3, 6, 9].
            if (arr[0][2] == arr[1][2] && arr[0][2] == arr[2][2])
            {
                if (arr[0][2] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [1, 5, 9].
            if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
            {
                if (arr[0][0] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [3, 5, 7].
            if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
            {
                if (arr[0][2] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithPlayer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }
    return 1;
}

// winGame will check for the winning situation for 1 player & computer everytime user presses a key.
int winGameForPc(char arr[3][3], char name1[], char name2[])
{
    while (1)
    {
        while (1)
        {
            // This will check for [1, 2, 3].
            if (arr[0][0] == arr[0][1] && arr[0][0] == arr[0][2])
            {
                if (arr[0][0] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [4, 5, 6].
            if (arr[1][0] == arr[1][1] && arr[1][0] == arr[1][2])
            {
                if (arr[1][0] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [7, 8, 9].
            if (arr[2][0] == arr[2][1] && arr[2][0] == arr[2][2])
            {
                if (arr[2][0] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [1, 4, 7].
            if (arr[0][0] == arr[1][0] && arr[0][0] == arr[2][0])
            {
                if (arr[0][0] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [2, 5, 8].
            if (arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1])
            {
                if (arr[0][1] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [3, 6, 9].
            if (arr[0][2] == arr[1][2] && arr[0][2] == arr[2][2])
            {
                if (arr[0][2] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [1, 5, 9].
            if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
            {
                if (arr[0][0] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }

    while (1)
    {
        while (1)
        {
            // This will check for [3, 5, 7].
            if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
            {
                if (arr[0][2] == 'X')
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name1);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                else
                {
                    char choice;
                    system("cls");
                    printf("\033[1;35m");
                    printf("%s Won.", name2);
                    printf("\n");
                    printf("Do you want to play again ?\n");
                    printf("If yes then press 'Y' or 'y'\n");
                    printf("If no then press 'N' or 'n'\n");
                    scanf("%c", &choice);
                    printf("\033[0m");
                    if (choice == 'Y' || choice == 'y')
                        playWithSmartComputer();
                    else
                        exit(0);
                }
                return 0;
            }
            else
                break;
        }
        break;
    }
    return 1;
}

// winPredict() will predict the winning condition & stop the player to win.
int winPredict(char arr[3][3])
{
    if (arr[0][0] == arr[0][1] && arr[0][2] != 'X' && arr[0][2] != 'O')
    {
        gotoxy(16, 5);
        arr[0][2] = 'O';
        printf("%c", arr[0][2]);
        return 1;
    }
    else if (arr[0][1] == arr[0][2] && arr[0][0] != 'X' && arr[0][0] != 'O')
    {
        gotoxy(2, 5);
        arr[0][0] = 'O';
        printf("%c", arr[0][0]);
        return 1;
    }
    else if (arr[0][0] == arr[0][2] && arr[0][1] != 'X' && arr[0][1] != 'O')
    {
        gotoxy(9, 5);
        arr[0][1] = 'O';
        printf("%c", arr[0][1]);
        return 1;
    }
    else if (arr[1][0] == arr[1][1] && arr[1][2] != 'X' && arr[1][2] != 'O')
    {
        gotoxy(16, 7);
        arr[1][2] = 'O';
        printf("%c", arr[1][2]);
        return 1;
    }
    else if (arr[1][1] == arr[1][2] && arr[1][0] != 'X' && arr[1][0] != 'O')
    {
        gotoxy(2, 7);
        arr[1][0] = 'O';
        printf("%c", arr[1][0]);
        return 1;
    }
    else if (arr[1][0] == arr[1][2] && arr[1][1] != 'X' && arr[1][1] != 'O')
    {
        gotoxy(9, 7);
        arr[1][1] = 'O';
        printf("%c", arr[1][1]);
        return 1;
    }
    else if (arr[2][0] == arr[2][1] && arr[2][2] != 'X' && arr[2][2] != 'O')
    {
        gotoxy(16, 9);
        arr[2][2] = 'O';
        printf("%c", arr[2][2]);
        return 1;
    }
    else if (arr[2][1] == arr[2][2] && arr[2][0] != 'X' && arr[2][0] != 'O')
    {
        gotoxy(2, 9);
        arr[2][0] = 'O';
        printf("%c", arr[2][0]);
        return 1;
    }
    else if (arr[2][0] == arr[2][2] && arr[2][1] != 'X' && arr[2][1] != 'O')
    {
        gotoxy(9, 9);
        arr[2][1] = 'O';
        printf("%c", arr[2][1]);
        return 1;
    }
    else if (arr[0][0] == arr[1][0] && arr[2][0] != 'X' && arr[2][0] != 'O')
    {
        gotoxy(2, 9);
        arr[2][0] = 'O';
        printf("%c", arr[2][0]);
        return 1;
    }
    else if (arr[1][0] == arr[2][0] && arr[0][0] != 'X' && arr[0][0] != 'O')
    {
        gotoxy(2, 5);
        arr[0][0] = 'O';
        printf("%c", arr[0][0]);
        return 1;
    }
    else if (arr[0][0] == arr[2][0] && arr[1][0] != 'X' && arr[1][0] != 'O')
    {
        gotoxy(2, 7);
        arr[1][0] = 'O';
        printf("%c", arr[1][0]);
        return 1;
    }
    else if (arr[0][1] == arr[1][1] && arr[2][1] != 'X' && arr[2][1] != 'O')
    {
        gotoxy(9, 9);
        arr[2][1] = 'O';
        printf("%c", arr[2][1]);
        return 1;
    }
    else if (arr[1][1] == arr[2][1] && arr[0][1] != 'X' && arr[0][1] != 'O')
    {
        gotoxy(9, 5);
        arr[0][1] = 'O';
        printf("%c", arr[0][1]);
        return 1;
    }
    else if (arr[0][1] == arr[2][1] && arr[1][1] != 'X' && arr[1][1] != 'O')
    {
        gotoxy(9, 7);
        arr[1][1] = 'O';
        printf("%c", arr[1][1]);
        return 1;
    }
    else if (arr[0][2] == arr[1][2] && arr[2][2] != 'X' && arr[2][2] != 'O')
    {
        gotoxy(16, 9);
        arr[2][2] = 'O';
        printf("%c", arr[2][2]);
        return 1;
    }
    else if (arr[1][2] == arr[2][2] && arr[0][2] != 'X' && arr[0][2] != 'O')
    {
        gotoxy(16, 5);
        arr[0][2] = 'O';
        printf("%c", arr[0][2]);
        return 1;
    }
    else if (arr[0][2] == arr[2][2] && arr[1][2] != 'X' && arr[1][2] != 'O')
    {
        gotoxy(16, 7);
        arr[1][2] = 'O';
        printf("%c", arr[1][2]);
        return 1;
    }
    else if (arr[0][0] == arr[1][1] && arr[2][2] != 'X' && arr[2][2] != 'O')
    {
        gotoxy(16, 9);
        arr[2][2] = 'O';
        printf("%c", arr[2][2]);
        return 1;
    }
    else if (arr[2][2] == arr[1][1] && arr[0][0] != 'X' && arr[0][0] != 'O')
    {
        gotoxy(2, 5);
        arr[0][0] = 'O';
        printf("%c", arr[0][0]);
        return 1;
    }
    else if (arr[2][2] == arr[0][0] && arr[1][1] != 'X' && arr[1][1] != 'O')
    {
        gotoxy(9, 7);
        arr[1][1] = 'O';
        printf("%c", arr[1][1]);
        return 1;
    }
    else if (arr[1][1] == arr[0][2] && arr[2][0] != 'X' && arr[2][0] != 'O')
    {
        gotoxy(2, 9);
        arr[2][0] = 'O';
        printf("%c", arr[2][0]);
        return 1;
    }
    else if (arr[1][1] == arr[2][0] && arr[0][2] != 'X' && arr[0][2] != 'O')
    {
        gotoxy(16, 5);
        arr[0][2] = 'O';
        printf("%c", arr[0][2]);
        return 1;
    }
    else if (arr[0][2] == arr[2][0] && arr[1][1] != 'X' && arr[1][1] != 'O')
    {
        gotoxy(9, 7);
        arr[1][1] = 'O';
        printf("%c", arr[1][1]);
        return 1;
    }
    return 0;
}

// winEvilPredict() will predict the winning condition & stop the player to win.
int winEvilPredict(char arr[3][3])
{
    int flag = 0;
    if (arr[0][0] == arr[0][1] && arr[0][2] != 'X' && arr[0][2] != 'O')
    {
        gotoxy(16, 5);
        arr[0][2] = 'O';
        printf("%c", arr[0][2]);
        flag = 1;
    }
    if (arr[0][1] == arr[0][2] && arr[0][0] != 'X' && arr[0][0] != 'O')
    {
        gotoxy(2, 5);
        arr[0][0] = 'O';
        printf("%c", arr[0][0]);
        flag = 1;
    }
    if (arr[0][0] == arr[0][2] && arr[0][1] != 'X' && arr[0][1] != 'O')
    {
        gotoxy(9, 5);
        arr[0][1] = 'O';
        printf("%c", arr[0][1]);
        flag = 1;
    }
    if (arr[1][0] == arr[1][1] && arr[1][2] != 'X' && arr[1][2] != 'O')
    {
        gotoxy(16, 7);
        arr[1][2] = 'O';
        printf("%c", arr[1][2]);
        flag = 1;
    }
    if (arr[1][1] == arr[1][2] && arr[1][0] != 'X' && arr[1][0] != 'O')
    {
        gotoxy(2, 7);
        arr[1][0] = 'O';
        printf("%c", arr[1][0]);
        flag = 1;
    }
    if (arr[1][0] == arr[1][2] && arr[1][1] != 'X' && arr[1][1] != 'O')
    {
        gotoxy(9, 7);
        arr[1][1] = 'O';
        printf("%c", arr[1][1]);
        flag = 1;
    }
    if (arr[2][0] == arr[2][1] && arr[2][2] != 'X' && arr[2][2] != 'O')
    {
        gotoxy(16, 9);
        arr[2][2] = 'O';
        printf("%c", arr[2][2]);
        flag = 1;
    }
    if (arr[2][1] == arr[2][2] && arr[2][0] != 'X' && arr[2][0] != 'O')
    {
        gotoxy(2, 9);
        arr[2][0] = 'O';
        printf("%c", arr[2][0]);
        flag = 1;
    }
    if (arr[2][0] == arr[2][2] && arr[2][1] != 'X' && arr[2][1] != 'O')
    {
        gotoxy(9, 9);
        arr[2][1] = 'O';
        printf("%c", arr[2][1]);
        flag = 1;
    }
    if (arr[0][0] == arr[1][0] && arr[2][0] != 'X' && arr[2][0] != 'O')
    {
        gotoxy(2, 9);
        arr[2][0] = 'O';
        printf("%c", arr[2][0]);
        flag = 1;
    }
    if (arr[1][0] == arr[2][0] && arr[0][0] != 'X' && arr[0][0] != 'O')
    {
        gotoxy(2, 5);
        arr[0][0] = 'O';
        printf("%c", arr[0][0]);
        flag = 1;
    }
    if (arr[0][0] == arr[2][0] && arr[1][0] != 'X' && arr[1][0] != 'O')
    {
        gotoxy(2, 7);
        arr[1][0] = 'O';
        printf("%c", arr[1][0]);
        flag = 1;
    }
    if (arr[0][1] == arr[1][1] && arr[2][1] != 'X' && arr[2][1] != 'O')
    {
        gotoxy(9, 9);
        arr[2][1] = 'O';
        printf("%c", arr[2][1]);
        flag = 1;
    }
    if (arr[1][1] == arr[2][1] && arr[0][1] != 'X' && arr[0][1] != 'O')
    {
        gotoxy(9, 5);
        arr[0][1] = 'O';
        printf("%c", arr[0][1]);
        flag = 1;
    }
    if (arr[0][1] == arr[2][1] && arr[1][1] != 'X' && arr[1][1] != 'O')
    {
        gotoxy(9, 7);
        arr[1][1] = 'O';
        printf("%c", arr[1][1]);
        flag = 1;
    }
    if (arr[0][2] == arr[1][2] && arr[2][2] != 'X' && arr[2][2] != 'O')
    {
        gotoxy(16, 9);
        arr[2][2] = 'O';
        printf("%c", arr[2][2]);
        flag = 1;
    }
    if (arr[1][2] == arr[2][2] && arr[0][2] != 'X' && arr[0][2] != 'O')
    {
        gotoxy(16, 5);
        arr[0][2] = 'O';
        printf("%c", arr[0][2]);
        flag = 1;
    }
    if (arr[0][2] == arr[2][2] && arr[1][2] != 'X' && arr[1][2] != 'O')
    {
        gotoxy(16, 7);
        arr[1][2] = 'O';
        printf("%c", arr[1][2]);
        flag = 1;
    }
    if (arr[0][0] == arr[1][1] && arr[2][2] != 'X' && arr[2][2] != 'O')
    {
        gotoxy(16, 9);
        arr[2][2] = 'O';
        printf("%c", arr[2][2]);
        flag = 1;
    }
    if (arr[2][2] == arr[1][1] && arr[0][0] != 'X' && arr[0][0] != 'O')
    {
        gotoxy(2, 5);
        arr[0][0] = 'O';
        printf("%c", arr[0][0]);
        flag = 1;
    }
    if (arr[2][2] == arr[0][0] && arr[1][1] != 'X' && arr[1][1] != 'O')
    {
        gotoxy(9, 7);
        arr[1][1] = 'O';
        printf("%c", arr[1][1]);
        flag = 1;
    }
    if (arr[1][1] == arr[0][2] && arr[2][0] != 'X' && arr[2][0] != 'O')
    {
        gotoxy(2, 9);
        arr[2][0] = 'O';
        printf("%c", arr[2][0]);
        flag = 1;
    }
    if (arr[1][1] == arr[2][0] && arr[0][2] != 'X' && arr[0][2] != 'O')
    {
        gotoxy(16, 5);
        arr[0][2] = 'O';
        printf("%c", arr[0][2]);
        flag = 1;
    }
    if (arr[0][2] == arr[2][0] && arr[1][1] != 'X' && arr[1][1] != 'O')
    {
        gotoxy(9, 7);
        arr[1][1] = 'O';
        printf("%c", arr[1][1]);
    }
    if (flag == 1)
        return 1;
    else
        return 0;
}

// playWithPlayer will control the working of game for 2 players.
int playWithPlayer()
{
    char name1[20], name2[20];
    system("cls");
    printf("\033[1;34m");
    printf("Enter Player 1 name: ");
    printf("\033[0m");
    fflush(stdin);
    printf("\033[1;37m");
    fgets(name1, 20, stdin);
    printf("\033[0m");
    fflush(stdin);
    printf("\033[1;34m");
    printf("Enter Player 2 name: ");
    printf("\033[0m");
    printf("\033[1;37m");
    fgets(name2, 20, stdin);
    printf("\033[0m");
    system("cls");
    name1[strlen(name1) - 1] = '\0';
    name2[strlen(name2) - 1] = '\0';

    // Printing array.
    char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    printf("\033[1;36m");
    printf("-------------------------------------------------------> Tic-Tac-Toe <-----------------------------------------------");
    printf("\033[0m");
    printf("\n");
    printf("\n");
    printf("\033[1;37m");
    printf("%s: X\n", name1);
    printf("%s: O", name2);
    printf("\033[0m");
    printf("\n");
    printf("\n");
    printf("\033[1;35m");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %c   ", arr[i][j]);
            if (j != 2)
                printf("|");
        }
        printf("\n");
        for (int i = 0; i < 1; i++)
            for (int j = 0; j < 3; j++)
                if (j != 2)
                    printf("      |");
        printf("\n");
    }
    printf("\033[0m");

    // chance will change alternatively for 'X' or 'O' everytime user presses a key.
    char chance = 'O', ch;
    int countDraw = 0;                      // This will handle the draw situation.
    while (1 && winGame(arr, name1, name2)) // winGame will return true if no-one is declared as winner at the current time & false if someone won.
    {
        ch = getch(); // Taking input.
        printf("\033[1;37m");
        switch (ch)
        {
        case 49:
            if (arr[0][0] != 'X' && arr[0][0] != 'O')
            {
                ++countDraw;
                gotoxy(2, 5);
                arr[0][0] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                printf("%c", arr[0][0]);
                chance = arr[0][0];
            }
            break;

        case 50:
            if (arr[0][1] != 'X' && arr[0][1] != 'O')
            {
                ++countDraw;
                gotoxy(9, 5);
                arr[0][1] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[0][1]);
                chance = arr[0][1];
            }
            break;

        case 51:
            if (arr[0][2] != 'X' && arr[0][2] != 'O')
            {
                ++countDraw;
                gotoxy(16, 5);
                arr[0][2] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[0][2]);
                chance = arr[0][2];
            }
            break;

        case 52:
            if (arr[1][0] != 'X' && arr[1][0] != 'O')
            {
                ++countDraw;
                gotoxy(2, 7);
                arr[1][0] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[1][0]);
                chance = arr[1][0];
            }
            break;

        case 53:
            if (arr[1][1] != 'X' && arr[1][1] != 'O')
            {
                ++countDraw;
                gotoxy(9, 7);
                arr[1][1] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[1][1]);
                chance = arr[1][1];
            }
            break;

        case 54:
            if (arr[1][2] != 'X' && arr[1][2] != 'O')
            {
                ++countDraw;
                gotoxy(16, 7);
                arr[1][2] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[1][2]);
                chance = arr[1][2];
            }
            break;

        case 55:
            if (arr[2][0] != 'X' && arr[2][0] != 'O')
            {
                ++countDraw;
                gotoxy(2, 9);
                arr[2][0] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[2][0]);
                chance = arr[2][0];
            }
            break;

        case 56:
            if (arr[2][1] != 'X' && arr[2][1] != 'O')
            {
                ++countDraw;
                gotoxy(9, 9);
                arr[2][1] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[2][1]);
                chance = arr[2][1];
            }
            break;

        case 57:
            if (arr[2][2] != 'X' && arr[2][2] != 'O')
            {
                ++countDraw;
                gotoxy(16, 9);
                arr[2][2] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[2][2]);
                chance = arr[2][2];
            }
            break;

        case 27:
            exit(0);
            break;

        default:
            break;
        }
        printf("\033[0m");

        // countDraw will be 9 only then when no-one is found as winner & game will be declared as draw in this situation.
        if (countDraw == 9 && winGame(arr, name1, name2))
        {
            char choice;
            system("cls");
            printf("\033[1;32m");
            printf("Game Draw !!\n");
            printf("Do you want to play again ?\n");
            printf("If yes then press 'Y' or 'y'\n");
            printf("If no then press 'N' or 'n'\n");
            scanf("%c", &choice);
            printf("\033[0m");
            if (choice == 'Y' || choice == 'y')
                playWithPlayer();
            else
                exit(0);
        }
    }
}

// playWithSmartComputer will control the working of game for player & computer.
int playWithSmartComputer()
{
    char name[20], name2[20] = "Computer";
    system("cls");
    printf("\033[1;34m");
    printf("Enter Player name: ");
    fflush(stdin);
    fgets(name, 20, stdin);
    printf("\033[0m");
    system("cls");
    name[strlen(name) - 1] = '\0';

    // Printing array.
    char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    printf("\033[1;36m");
    printf("-------------------------------------------------------> Tic-Tac-Toe <-----------------------------------------------");
    printf("\033[0m");
    printf("\n");
    printf("\n");
    printf("\033[1;37m");
    printf("%s: X\n", name);
    printf("%s: O", name2);
    printf("\033[0m");
    printf("\n");
    printf("\n");
    printf("\033[1;35m");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %c   ", arr[i][j]);
            if (j != 2)
                printf("|");
        }
        printf("\n");
        for (int i = 0; i < 1; i++)
            for (int j = 0; j < 3; j++)
                if (j != 2)
                    printf("      |");
        printf("\n");
    }
    printf("\033[0m");

    char ch, chance = 'O';
    int countDraw = 0;
    while (1 && winGameForPc(arr, name, name2))
    {
        ch = getch();
        printf("\033[1;37m");
        switch (ch)
        {
        case 49:
            if (arr[0][0] != 'X' && arr[0][0] != 'O')
            {
                ++countDraw;
                gotoxy(2, 5);
                arr[0][0] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                printf("%c", arr[0][0]);
                chance = arr[0][0];
                if (winPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                }
            }
            break;

        case 50:
            if (arr[0][1] != 'X' && arr[0][1] != 'O')
            {
                ++countDraw;
                gotoxy(9, 5);
                arr[0][1] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[0][1]);
                chance = arr[0][1];
                if (winPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                }
                break;
            }

        case 51:
            if (arr[0][2] != 'X' && arr[0][2] != 'O')
            {
                ++countDraw;
                gotoxy(16, 5);
                arr[0][2] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[0][2]);
                chance = arr[0][2];
                if (winPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                if (arr[1][0] != 'X' && arr[1][0] != 'O')
                {
                    ++countDraw;
                    gotoxy(2, 7);
                    arr[1][0] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[1][0]);
                    chance = arr[1][0];
                }
                else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                {
                    ++countDraw;
                    gotoxy(9, 7);
                    arr[1][1] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[1][1]);
                    chance = arr[1][1];
                }
                else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                {
                    ++countDraw;
                    gotoxy(16, 7);
                    arr[1][2] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[1][2]);
                    chance = arr[1][2];
                }
                else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                {
                    ++countDraw;
                    gotoxy(2, 9);
                    arr[2][0] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[2][0]);
                    chance = arr[2][0];
                }
                else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                {
                    ++countDraw;
                    gotoxy(9, 9);
                    arr[2][1] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[2][1]);
                    chance = arr[2][1];
                }
                else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                {
                    ++countDraw;
                    gotoxy(16, 9);
                    arr[2][2] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[2][2]);
                    chance = arr[2][2];
                }
                else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                {
                    ++countDraw;
                    gotoxy(2, 5);
                    arr[0][0] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[0][0]);
                    chance = arr[0][0];
                }
                else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                {
                    ++countDraw;
                    gotoxy(9, 5);
                    arr[0][1] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[0][1]);
                    chance = arr[0][1];
                }
                break;
            }

        case 52:
            if (arr[1][0] != 'X' && arr[1][0] != 'O')
            {
                ++countDraw;
                gotoxy(2, 7);
                arr[1][0] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[1][0]);
                chance = arr[1][0];
                if (winPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                }
            }
            break;

        case 53:
            if (arr[1][1] != 'X' && arr[1][1] != 'O')
            {
                ++countDraw;
                gotoxy(9, 7);
                arr[1][1] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[1][1]);
                chance = arr[1][1];
                if (winPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                }
            }
            break;

        case 54:
            if (arr[1][2] != 'X' && arr[1][2] != 'O')
            {
                ++countDraw;
                gotoxy(16, 7);
                arr[1][2] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[1][2]);
                chance = arr[1][2];
                if (winPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                }
            }
            break;

        case 55:
            if (arr[2][0] != 'X' && arr[2][0] != 'O')
            {
                ++countDraw;
                gotoxy(2, 9);
                arr[2][0] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[2][0]);
                chance = arr[2][0];
                if (winPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                }
            }
            break;

        case 56:
            if (arr[2][1] != 'X' && arr[2][1] != 'O')
            {
                ++countDraw;
                gotoxy(9, 9);
                arr[2][1] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[2][1]);
                chance = arr[2][1];
                if (winPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                }
            }
            break;

        case 57:
            if (arr[2][2] != 'X' && arr[2][2] != 'O')
            {
                ++countDraw;
                gotoxy(16, 9);
                arr[2][2] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[2][2]);
                chance = arr[2][2];
                if (winPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                }
                break;
            }

        case 27:
            exit(0);

        default:
            break;
            printf("\033[0m");
        }

        // countDraw will be 9 only then when no-one is found as winner & game will be declared as draw in this situation.
        if (countDraw == 9 && winGameForPc(arr, name, name2))
        {
            char choice;
            system("cls");
            printf("\033[1;32m");
            printf("Game Draw !!\n");
            printf("Do you want to play again ?\n");
            printf("If yes then press 'Y' or 'y'\n");
            printf("If no then press 'N' or 'n'\n");
            scanf("%c", &choice);
            printf("\033[0m");
            if (choice == 'Y' || choice == 'y')
                playWithSmartComputer();
            else
                exit(0);
        }
    }
}

// playWithEvilComputer will control the working of game for player & Evil Computer.
int playWithEvilComputer()
{
    char name[20], name2[20] = "Devil";
    system("cls");
    printf("\033[1;34m");
    printf("Enter Player name: ");
    fflush(stdin);
    fgets(name, 20, stdin);
    printf("\033[0m");
    system("cls");
    name[strlen(name) - 1] = '\0';

    // Printing array.
    char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    printf("\033[1;36m");
    printf("-------------------------------------------------------> Tic-Tac-Toe <-----------------------------------------------");
    printf("\033[0m");
    printf("\n");
    printf("\n");
    printf("\033[1;37m");
    printf("%s: X\n", name);
    printf("%s: O", name2);
    printf("\033[0m");
    printf("\n");
    printf("\n");
    printf("\033[1;35m");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("  %c   ", arr[i][j]);
            if (j != 2)
                printf("|");
        }
        printf("\n");
        for (int i = 0; i < 1; i++)
            for (int j = 0; j < 3; j++)
                if (j != 2)
                    printf("      |");
        printf("\n");
    }
    printf("\033[0m");

    char ch, chance = 'O';
    int countDraw = 0;
    while (1 && winGameForPc(arr, name, name2))
    {
        ch = getch();
        printf("\033[1;37m");
        switch (ch)
        {
        case 49:
            if (arr[0][0] != 'X' && arr[0][0] != 'O')
            {
                ++countDraw;
                gotoxy(2, 5);
                arr[0][0] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                printf("%c", arr[0][0]);
                chance = arr[0][0];
                if (winEvilPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O'); // Changing values 'X' or 'Y' alternatively.
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                }
            }
            break;

        case 50:
            if (arr[0][1] != 'X' && arr[0][1] != 'O')
            {
                ++countDraw;
                gotoxy(9, 5);
                arr[0][1] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[0][1]);
                chance = arr[0][1];
                if (winEvilPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                }
            }
            break;

        case 51:
            if (arr[0][2] != 'X' && arr[0][2] != 'O')
            {
                ++countDraw;
                gotoxy(16, 5);
                arr[0][2] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[0][2]);
                chance = arr[0][2];
                if (winEvilPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                if (arr[1][0] != 'X' && arr[1][0] != 'O')
                {
                    ++countDraw;
                    gotoxy(2, 7);
                    arr[1][0] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[1][0]);
                    chance = arr[1][0];
                }
                else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                {
                    ++countDraw;
                    gotoxy(9, 7);
                    arr[1][1] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[1][1]);
                    chance = arr[1][1];
                }
                else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                {
                    ++countDraw;
                    gotoxy(16, 7);
                    arr[1][2] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[1][2]);
                    chance = arr[1][2];
                }
                else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                {
                    ++countDraw;
                    gotoxy(2, 9);
                    arr[2][0] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[2][0]);
                    chance = arr[2][0];
                }
                else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                {
                    ++countDraw;
                    gotoxy(9, 9);
                    arr[2][1] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[2][1]);
                    chance = arr[2][1];
                }
                else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                {
                    ++countDraw;
                    gotoxy(16, 9);
                    arr[2][2] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[2][2]);
                    chance = arr[2][2];
                }
                else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                {
                    ++countDraw;
                    gotoxy(2, 5);
                    arr[0][0] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[0][0]);
                    chance = arr[0][0];
                }
                else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                {
                    ++countDraw;
                    gotoxy(9, 5);
                    arr[0][1] = (chance == 'O' ? 'X' : 'O');
                    printf("%c", arr[0][1]);
                    chance = arr[0][1];
                }
            }
            break;

        case 52:
            if (arr[1][0] != 'X' && arr[1][0] != 'O')
            {
                ++countDraw;
                gotoxy(2, 7);
                arr[1][0] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[1][0]);
                chance = arr[1][0];
                if (winEvilPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                }
            }
            break;

        case 53:
            if (arr[1][1] != 'X' && arr[1][1] != 'O')
            {
                ++countDraw;
                gotoxy(9, 7);
                arr[1][1] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[1][1]);
                chance = arr[1][1];
                if (winEvilPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                }
            }
            break;

        case 54:
            if (arr[1][2] != 'X' && arr[1][2] != 'O')
            {
                ++countDraw;
                gotoxy(16, 7);
                arr[1][2] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[1][2]);
                chance = arr[1][2];
                if (winEvilPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                }
            }
            break;

        case 55:
            if (arr[2][0] != 'X' && arr[2][0] != 'O')
            {
                ++countDraw;
                gotoxy(2, 9);
                arr[2][0] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[2][0]);
                chance = arr[2][0];
                if (winEvilPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                    else if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                }
            }
            break;

        case 56:
            if (arr[2][1] != 'X' && arr[2][1] != 'O')
            {
                ++countDraw;
                gotoxy(9, 9);
                arr[2][1] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[2][1]);
                chance = arr[2][1];
                if (winEvilPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[2][2] != 'X' && arr[2][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 9);
                        arr[2][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][2]);
                        chance = arr[2][2];
                    }
                    else if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                }
            }
            break;

        case 57:
            if (arr[2][2] != 'X' && arr[2][2] != 'O')
            {
                ++countDraw;
                gotoxy(16, 9);
                arr[2][2] = (chance == 'O' ? 'X' : 'O');
                printf("%c", arr[2][2]);
                chance = arr[2][2];
                if (winEvilPredict(arr))
                {
                    chance = 'O';
                    ++countDraw;
                    break;
                }
                else
                {
                    if (arr[0][0] != 'X' && arr[0][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 5);
                        arr[0][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][0]);
                        chance = arr[0][0];
                    }
                    else if (arr[0][1] != 'X' && arr[0][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 5);
                        arr[0][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][1]);
                        chance = arr[0][1];
                    }
                    else if (arr[0][2] != 'X' && arr[0][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 5);
                        arr[0][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[0][2]);
                        chance = arr[0][2];
                    }
                    else if (arr[1][0] != 'X' && arr[1][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 7);
                        arr[1][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][0]);
                        chance = arr[1][0];
                    }
                    else if (arr[1][1] != 'X' && arr[1][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 7);
                        arr[1][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][1]);
                        chance = arr[1][1];
                    }
                    else if (arr[1][2] != 'X' && arr[1][2] != 'O')
                    {
                        ++countDraw;
                        gotoxy(16, 7);
                        arr[1][2] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[1][2]);
                        chance = arr[1][2];
                    }
                    else if (arr[2][0] != 'X' && arr[2][0] != 'O')
                    {
                        ++countDraw;
                        gotoxy(2, 9);
                        arr[2][0] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][0]);
                        chance = arr[2][0];
                    }
                    else if (arr[2][1] != 'X' && arr[2][1] != 'O')
                    {
                        ++countDraw;
                        gotoxy(9, 9);
                        arr[2][1] = (chance == 'O' ? 'X' : 'O');
                        printf("%c", arr[2][1]);
                        chance = arr[2][1];
                    }
                }
                break;
            }

        case 27:
            exit(0);

        default:
            break;
            printf("\033[0m");
        }

        // countDraw will be 9 only then when no-one is found as winner & game will be declared as draw in this situation.
        if (countDraw == 9 && winGameForPc(arr, name, name2))
        {
            char choice;
            system("cls");
            printf("\033[1;32m");
            printf("Game Draw !!\n");
            printf("Do you want to play again ?\n");
            printf("If yes then press 'Y' or 'y'\n");
            printf("If no then press 'N' or 'n'\n");
            scanf("%c", &choice);
            printf("\033[0m");
            if (choice == 'Y' || choice == 'y')
                playWithSmartComputer();
            else
                exit(0);
        }
    }
}

// Menu Chart.
int showMenu()
{
    system("cls");
    int ch;
    printf("\033[1;31m");
    printf("\t\t\t\tWelcome to Tic-Tac-Toe Game !!\n");
    printf("\033[0m");
    printf("\n");
    printf("\033[1;33m");
    printf("Select one option from below.\n");
    printf("1. Want to play with Smart Computer.\n");
    printf("2. Want to play with Evil Computer.\n");
    printf("3. Want to play with Player.\n");
    printf("4. Exit.\n");
    printf("\033[0m");
    printf("\n");
    printf("\033[1;37m");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    printf("\033[0m");
    switch (ch)
    {
    case 1:
        playWithSmartComputer(); // Select if you want to play with Computer.
        break;

    case 2:
        playWithEvilComputer(); // Select if you want to play with Evil Computer.
        break;

    case 3:
        playWithPlayer(); // Select if you want to play 2 players game.
        break;

    case 4:
        exit(0);

    default:
        break;
    }
}

// Main Function.
int main()
{
    showMenu();
    return 0;
}
