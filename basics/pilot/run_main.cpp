#include <iostream>
#include "pilot_func_lib.h"
#include "words.h"

int main()
{
    say_hello(); // void function in "words.h"

    print_name(); // void function in "words.h"

    int a=15;
    int b=2;

    std::cout << sum(a,b) << std::endl; // math func in "pilot_func_lib.h"

    std::cout << area_quadrangle(a,b) << std::endl; // math func in "pilot_func_lib.h"

    std::cout << pow(a,b) << std::endl; // math func in "pilot_func_lib.h"

    return 0;

}
