#include <stdio.h>
#include <stdlib.h>
#include "../includes/calc.h"

void setCursorAt(int x, int y)
{
    printf("\033[%d,%dH", x, y);
}

int main(int argc, char ** argv)
{
    double a, b;
    char operand;

    while(1)
    {
        printf("╔");
        for (int i = 0; i < 40; ++i)
            printf("═");
        printf("╗\n");

       for (int j = 0; j < 2; ++j)
       {
           printf("║ ");
           for (int i = 0; i < 39; ++i)
               printf(" ");
           printf("║\n");
       }

        printf("╚");
        for (int i = 0; i < 40; ++i)
            printf("═");
        printf("╝\n");

        setCursorAt(1, 1);

        if(!scanf("%lf %c %lf", &a, &operand, &b))
            break;
        switch (operand)
        {
            case '+':
                printf("%.2lf\n", ADD(a, b));
                break;
            case '-':
                printf("%.2lf\n", SOU(a, b));
                break;
            case '*':
                printf("%.2lf\n", MUL(a, b));
            case '/':
                printf("%.2lf\n", DIV(a, b));
                break;
            case '^':
                printf("%.2lf\n", PUI(a, b));
                break;
            case '%':
                printf("%.2lf\n", MOD(a, b));
                break;
            default: break;
        }
    }
    return EXIT_SUCCESS;
}
