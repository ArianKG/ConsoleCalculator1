int printf(const char *format, ...);
int scanf(const char *format, ...);

int main()
{
    double num1, num2, r;
    char ch;
    do
    {
        scanf("%lf", &num1);
        scanf("%lf", &num2);
        printf("\ta - Add\n\tb - Substract\n\tc - Multiply\n\td - Divide\n");
        scanf(" %c", &ch);
        switch (ch)
        {
            case 'a':
                r = num1 + num2;
                printf("%lf + %lf = %f\n", num1, num2, r);
                break;
            case 'b':
                r = num1 - num2;
                printf("%lf - %lf = %f\n", num1, num2, r);
                break;
            case 'c':
                r = num1 * num2;
                printf("%lf * %lf = %f\n", num1, num2, r);
                break;
            case 'd':
                r = num1 / num2;
                if (num1 > 0 & num2 == 0 | num1 == 0 & num2 == 0)
                {
                    printf("Undefined\n");
                }
                else
                {
                    printf("%lf / %lf = %f\n", num1, num2, r);
                }
                break;
            default:
                printf("Invalid\n");
        }
    }
    while (1);
}
