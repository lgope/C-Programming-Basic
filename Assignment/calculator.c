#include <stdio.h>

int main()
{
    char operator;
    double first_num, second_num;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first_num, &second_num);

    switch (operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first_num, second_num, first_num + second_num);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first_num, second_num, first_num - second_num);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first_num, second_num, first_num * second_num);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first_num, second_num, first_num / second_num);
        break;
    // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
