#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int n; //number of preacquired data samples
    int x = 0; //sum of x
    int y = 0; //sum of y
    int sumXY = 0; //summation of XY
    int squaredX = 0; //summation of x^2
    int a = 0; // value a
    int b = 0; // value b


    printf("Enter the value of number of terms: \n");
    scanf("%d", &n);

    int arrayX[n];
    int arrayY[n];

    printf("enter the values for X: \n");
    for(i = 0; i < n; i++)
    {
      scanf("%d", &arrayX[i]);
    }

    printf("enter the values for Y: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arrayY[i]);
    }

    for(i = 0; i < n; i++)
    {
        x += arrayX[i]; //summation of X
        y += arrayY[i]; //summation of y
        sumXY += arrayX[i] * arrayY[i]; //summation of xy
        squaredX += pow(arrayX[i], 2); //summation of x^2
    }

    a = (((y)*(x))-((n)*(sumXY)))/((pow(x, 2))-((n)*(squaredX))); //slope
    b = ((y)-((a)*(x)))/(n); //y-intercept

    printf("The line is: y = %dx + %d ", a, b);


return 0;
}