#include <stdio.h>
#include <math.h>

void functionFor(double left, double right, int iterations) 
{
    
    double step = (right - left) / (iterations - 1);
    
    printf("\nfor:\n");
    printf("x    |");

    for (int i = 0; i < iterations; i++)
    {
        double x = left + i * step;
        printf("%6.3f |", x);
    }

    printf("\nf(x) |");

    for (int i = 0; i < iterations; i++) 
    {
        double x = left + i * step;
        double res = (sin(x) * sin(x)) / x;
        if (isnan(res) || isinf(res))
        {
            printf("  nan  |");
        }

        else
        {
            printf("%6.3f |", res);
        }

    }
    
}

void functionWhile(double left, double right, int iterations) 
{

    double step = (right - left) / (iterations - 1);
    double x = left;
    int i = 0;

    printf("\nwhile:\n");
    printf("x    |");

    for (int i = 0; i < iterations; i++)
    {
        double x = left + i * step;
        printf("%6.3f |", x);
    }

    printf("\nf(x) |");

    while (i < iterations) 
    {
        
        double res = (sin(x) * sin(x)) / x;

        if (isnan(res) || isinf(res))
        {
            printf("  nan  |");
        }

        else
        {
            printf("%6.3f |", res);
        }

        x += step;
        i++;

    }
}

void functionDoWhile(double left, double right, int iterations) 
{

    double step = (right - left) / (iterations - 1);
    double x = left;
    int i = 0;

    printf("\ndowhile:\n");
    printf("x    |");

    for (int i = 0; i < iterations; i++)
    {
        double x = left + i * step;
        printf("%6.3f |", x);
    }

    printf("\nf(x) |");

    do 
    {
        
        double res = (sin(x) * sin(x)) / x;

        if (isnan(res) || isinf(res))
        {
            printf("  nan  |");
        }

        else
        {
            printf("%6.3f |", res);
        }

        x += step;
        i++;

    } while (i < iterations);

}

int main() 
{

    double left, right;
    int iterations;

    printf("Enter: ");

    if ((scanf("%lf %lf %d", &left, &right, &iterations) != 3) || (left > right) || (left == right) || (iterations < 2))
    {
        printf("Incorrect input");
        return 1;
    }

    functionFor(left, right, iterations);
    functionWhile(left, right, iterations);
    functionDoWhile(left, right, iterations);

    return 0;
}
