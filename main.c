/*
Simple Calculator
by Kelvin Wekesa
Feb 2022
MIT License
C89 Compiler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable declaration
    int num1,num2,sum,diff,product;
    float quotient;
    printf ("Simple Calculator!\n");
    //Capture inputs
    printf("enter two values:");
    scanf("%d%d",&num1,&num2);
    //Computations
    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;
    quotient=(float)num1/num2;
    //output
    printf("%d+%d=%d\n",num1,num2,sum);
    printf("%d+%d=%d\n",num1,num2,diff);
    printf("%d+%d=%d\n",num1,num2,product);
    printf("%d+%d=%f\n",num1,num2,quotient);
    return 0;
}
