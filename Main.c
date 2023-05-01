#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "English");

    int sum, subtraction, division, multiplication;
    int num, num2, total;
    char operation;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("Choose your operation:\n");
    printf("1 - Sum\n");
    printf("2 - Subtracion\n");
    printf("3 - Multiplication\n");
    printf("4 - Divison\n");
    scanf("%d", &operation);

    printf("Enter another number: \n");
    scanf("%d", &num2);

    switch (operation)
    {
    case 1:
        sum = num + num2;
        printf("%d + %d = %d", num, num2, sum);
        break;
    case 2:
        subtraction = num - num2;
        printf("%d - %d = %d", num, num2, subtraction);
        break;
    case 3:
        multiplication = num * num2;
        printf("%d * %d = %d", num, num2, multiplication);
        break;
    case 4:
        division = num / num2;
        printf("%d / %d = %d", num, num2, division);
        break;
    default:
        break;
    }
}