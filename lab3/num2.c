#include <stdio.h>
#include <math.h>

double fun(double x)
{
    return log(x);
}

double left_rectangles(double a, double b, int n) 
{
    double h = (b - a) / n;
    double sum = 0.0;

    for (int i = 1; i < n; i++) 
    {
        double x = a + i * h;
        sum += fun(x);
    }

    return sum * h;
}

int main() 
{
    double a, b, E;
    
    printf("Введите пределы интегрирования (a и b): ");
    scanf("%lf %lf", &a, &b);
    printf("Введите точность (E): ");
    scanf("%lf", &E);

    int n = 1;
    double current_result, previous_result;
    
    current_result = left_rectangles(a, b, n);

    do 
    {
        n *= 2;
        previous_result = current_result;
        current_result = left_rectangles(a, b, n);

    } while ((current_result - previous_result) > E*E);

    printf("Последнее вычисленное значение определенного интеграла: %.6lf\n", current_result);

    return 0;
}
