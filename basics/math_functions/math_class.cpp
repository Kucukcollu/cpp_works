#include "math_class.h"
#include <iostream>

int sum(int number1, int number2)
{
    int summation = 0;
    
    summation = number1 + number2;
    
    std::cout << summation << std::endl;

}

int pow(int a,int b)
{
    int loop_mult=1;

    for(int i=0;i<b;i++)
    {
        loop_mult*=a;
    }

    std::cout << loop_mult << std::endl;
    
}

double area(double a,double b)
{
    double area;

    area = a*b;

    std::cout << area << std::endl;

}
