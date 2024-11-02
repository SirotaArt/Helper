#include <stdio.h>

double fact(int n) 
{

    if (n == 0) 
    {
        return 1;
    }

    double res = 1;

    for (int i = 1; i <= n; i++) 
    {
        res *= i;
    }

    return res;
}

double cal(double E) 
{

    double sum = 0.0;
    double term;
    int n = 0;

    do 
    {
        term = (n % 2 == 0 ? 1 : -1) / fact(n); 
        sum += term;
        n++;
    } while (term > E || term < -E); 

    return sum;
    
}

int main()
{

    double e;
    printf("Enter E: \n"); 

    if (scanf("%lf", &e) != 1) 
    {
        printf("Result: Incorrect input\n");
        return 1;
    }

    double res = cal(e);
    printf("Сумма ряда S = %.6lf\n", res);
    
    return 0;

}
