#include <stdio.h>
#include <math.h>

int main()
{
    
    double x, y;

    printf("Line equation: y = 0.5x + 1\n"); 
    printf("Enter point coordinates: \n"); 

    if (scanf("%lf %lf", &x, &y) != 2) 
    {
        printf("Result: Incorrect input\n");
        return 1;
    }

    if (fabs((y - (0.5*x + 1)) <= 0.000001)) 
    {
        printf("Result: Point is on the line\n");
    } 

    else if (y < ((0.5*x + 1) - 0.000001)) 
    {
        printf("Result: Point is under the line\n");
    } 

    else if (y > ((0.5*x + 1) + 0.000001))
    {
        printf("Result: Point is above the line\n");
    }

}
