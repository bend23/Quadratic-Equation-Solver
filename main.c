#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
A very simple quadratic equation solver
(ax^2 + bx + c = 0)
to find its delta and roots. 
*/


void eq_Print()
{
    printf("This is a quadratic equation solver, type ax^2 + bx + c = 0.\n");
    printf("\n");
    printf("Please enter a value for a, b, and c.\n");
    printf("\n");
}

void enter_Data(double *a, double *b, double *c)
{
    printf("The value for a: ");
    scanf("%lf", a);
    
    printf("The value for b: ");
    scanf("%lf", b);
    
    printf("The value for c: ");
    scanf("%lf", c); //or "%lf" for double type

    printf("\n");
}

double calc_Delta(double a, double b, double c)
{
    double delta;
    //delta = b*b - 4*a*c;

    return delta = b*b - 4*a*c;
}

double find_Roots(double delta, double a, double b, double c)
{
    double x1;
    double x2;

    if(delta != 0 && delta < 0)
    {
        printf("This ecuation doesn't have roots in R!\n");

        exit(-1);
    }

    if(delta == 0)
    {
        printf("The roots of this equation are equals, x1 = x2.\n");
        
        x1 = -b/2*a;
        printf("The root is %lg\n", x1);

        return x1;
    }

    if(delta != 0 && delta > 0)
    {
        printf("There are two different roots of the equation.\n");
        double roots;

        x1 = (-b + sqrt(b*b - 4*a*c))/2;
        x2 = (-b - sqrt(b*b -4*a*c))/2;

        printf("The roots are: x1 = %lg and x2 = %lg", x1, x2);
        
        //return x1;
        //return x2;
        roots = (x1, x2);
        return roots;
    }

    return 0;
}

int main()
{
    eq_Print();

    double a;
    double b;
    double c;
    double delta;

    enter_Data(&a, &b, &c);
    printf("The given equation is %lgx^2 + %lgx + %lg = 0\n", a, b, c);
    printf("\n");
    
    delta = calc_Delta(a, b, c);
    printf("The delta of this equation is d = %lg\n", delta);
    printf("\n");
    
    find_Roots(delta, a, b, c);

    return 0;
}
