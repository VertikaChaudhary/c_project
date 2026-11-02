#include <stdio.h>

float add(float a, float b)
{
return a + b;
}

float subtract(float a, float b)
{
return a - b;
}

float multiply(float a, float b)
{
return a * b;
}

float divide(float a, float b)
{
return a / b;
}

int main()
{
float a, b, result;
int choice;

printf("===== SIMPLE CALCULATOR =====\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");

printf("Enter your choice: ");
scanf("%d", &choice);

printf("Enter two numbers: ");
scanf("%f %f", &a, &b);

switch (choice)
{
    case 1:
        result = add(a, b);
        printf("Result = %.2f\n", result);
        break;

    case 2:
        result = subtract(a, b);
        printf("Result = %.2f\n", result);
        break;

    case 3:
        result = multiply(a, b);
        printf("Result = %.2f\n", result);
        break;

    case 4:
        if (b == 0)
        {
            printf("Division by zero is not allowed.\n");
        }
        else
        {
            result = divide(a, b);
            printf("Result = %.2f\n", result);
        }
        break;

    default:
        printf("Invalid choice!\n");
}

return 0;

}