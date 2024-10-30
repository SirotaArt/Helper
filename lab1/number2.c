#include <stdio.h>

int main()
{
    
    double x, y;
    printf("Line equation: y = 2x + 2\n"); 
    printf("Line equation: y = -x + 2\n");
    printf("Line equation: y = 0.5x - 1\n");
    printf("Enter point coordinates: \n"); 

    if (scanf("%lf %lf", &x, &y) != 2) 
    {
        printf("Result: Incorrect input\n");
        return 1;
    }

    if (y ==(2*x + 2)) 
    {
        printf("Result: Point placed on line 1 \n");
    } 

    else if (y == (0.5*x - 1))
    {
        printf("Result: Point placed on line 2 \n");
    } 

    else if (y == (-x + 2))
    {
        printf("Result: Point placed on line 3 \n");
    } 

    else if (y ==(2*x + 2) && y == (0.5*x - 1)) 
    {
        printf("Result: Point placed on line 1 and 2 \n");
    } 

    else if (y ==(2*x + 2) && y == (-x + 2)) 
    {
        printf("Result: Point placed on line 1 and 3 \n");
    } 

    else if (y == (0.5*x - 1) && y == (-x + 2))
    {
        printf("Result: Point placed on line 2 and 3\n");
    } 

    else if (y > (2*x + 2) && y > (-x + 2)) 
    {
        printf("Result: Point placed in region 6\n");
    } 
    
    else if (y < (0.5*x - 1) && y > (-x + 2)) 
    {
        printf("Result: Point placed in region 2\n");
    } 

    else if (y < (0.5*x - 1) && y > (2*x + 2)) 
    {
        printf("Result: Point placed in region 4\n");
    }

    else if (y > (0.5*x - 1) && y < (2*x + 2) && y < (-x + 2)) 
    {
        printf("Result: Point placed in region 7\n");
    }

    else if (y > (0.5*x - 1) && y < (2*x + 2) && y > (-x + 2)) 
    {
        printf("Result: Point placed in region 1\n");
    }

    else if (y < (0.5*x - 1) && y < (2*x + 2) && y < (-x + 2)) 
    {
        printf("Result: Point placed in region 3\n");
    }

    else if (y > (0.5*x - 1) && y > (2*x + 2) && y < (-x + 2)) 
    {
        printf("Result: Point placed in region 5\n");
    }
}
