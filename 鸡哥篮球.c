#include <stdio.h>
#include <windows.h> // For Windows, for Linux use unistd.h and usleep

void clearScreen()
{
    system("cls"); // For Linux use "clear"
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// 打篮球的多个动作
void drawFrame1()
{
    gotoxy(10, 5);
    printf("  O\n");
    gotoxy(10, 6);
    printf(" /|\\\n");
    gotoxy(10, 7);
    printf(" / \\\n");
    gotoxy(20, 6);
    printf("Basketball\n");
}

void drawFrame2()
{
    gotoxy(10, 5);
    printf("  O\n");
    gotoxy(10, 6);
    printf(" /|\\\n");
    gotoxy(10, 7);
    printf(" / \\ O\n"); // 蔡徐坤出手篮球
}

void drawFrame3()
{
    gotoxy(10, 5);
    printf("  O\n");
    gotoxy(10, 6);
    printf(" /|\\\n");
    gotoxy(10, 7);
    printf(" / \\\n");
    gotoxy(20, 5);
    printf("  O  \n"); // 篮球在空中
}

void drawFrame4()
{
    gotoxy(10, 5);
    printf("  O\n");
    gotoxy(10, 6);
    printf(" /|\\\n");
    gotoxy(10, 7);
    printf(" / \\\n");
    gotoxy(20, 4);
    printf("  O\n"); // 篮球接近篮筐
}

void drawFrame5()
{
    gotoxy(10, 5);
    printf("  O\n");
    gotoxy(10, 6);
    printf(" /|\\\n");
    gotoxy(10, 7);
    printf(" / \\\n");
    gotoxy(20, 3);
    printf("  O\n"); // 篮球进入篮筐
    gotoxy(25, 3);
    printf("Score!\n");
}

int main()
{
    while (1)
    {
        clearScreen();
        drawFrame1();
        Sleep(500);

        clearScreen();
        drawFrame2();
        Sleep(500);

        clearScreen();
        drawFrame3();
        Sleep(500);

        clearScreen();
        drawFrame4();
        Sleep(500);

        clearScreen();
        drawFrame5();
        Sleep(500);
    }

    return 0;
}