#include<stdio.h>
int main()
{
    double loan_amount, interest_rate, number_of_years, monthly_amount, total_amount;
    printf("Please enter the loan amount: ");
    scanf("%lf", &loan_amount);
    printf("Please enter the interest rate: ");
    scanf("%lf", &interest_rate);
    printf("Please enter the number of years: ");
    scanf("%lf", &number_of_years);
    total_amount = loan_amount + loan_amount * interest_rate * number_of_years / 100;
    monthly_amount = total_amount / (number_of_years * 12);
    printf("%.2lf\n", total_amount);
    printf("%.2lf\n", monthly_amount);
    return 0;
}
