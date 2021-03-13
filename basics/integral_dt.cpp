// integral data types

#include <iostream>
#include <climits>


int main()
{
    // short <= int <= long <= long long
    // how the intagral data types can be defined
    short a;
    int b;
    long c;
    long long d;

    unsigned short aa;
    unsigned bb;
    unsigned long cc;
    unsigned long long dd;

    // see the bytes with an operator
    std::cout << "short: " << sizeof(short) << " bytes and " << sizeof(short)*8 << " bits." << std::endl;
    std::cout << "int: " << sizeof(int) << " bytes and " << sizeof(int)*8 << " bits." << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes and " << sizeof(long)*8 << " bits." << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes and " << sizeof(long long)*8 << " bits." << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    
    // see the min max and unsigned limits with using header file that "climits"
    std::cout << "shot min value: " << SHRT_MIN << std::endl;
    std::cout << "shot max value: " << SHRT_MAX << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "unsigned short max value: " << USHRT_MAX << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "int min value: " << INT_MIN << std::endl;
    std::cout << "int max value: " << INT_MAX << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "unsigned int max value: " << UINT_MAX << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "long min value: " << LONG_MIN << std::endl;
    std::cout << "long max value: " << LONG_MAX << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "unsigned long max value: " << ULONG_MAX << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "long long min value: " << LLONG_MIN << std::endl;
    std::cout << "long long max value: " << LLONG_MAX << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "unsigned long long max value: " << ULLONG_MAX << std::endl;

    return 0;
}
