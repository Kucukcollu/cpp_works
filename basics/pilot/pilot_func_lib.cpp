#include "pilot_func_lib.h"

int sum(int number1,int number2)
{
    return number1+number2;
}

int area_quadrangle(int length,int width)
{
    return length*width;
}

int pow(int base, int power)
{
    int mult=1;

    for(int i=0;i<power;i++)
    {
        mult*=base;
    }

    return mult;
}
