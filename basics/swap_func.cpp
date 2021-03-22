// create a swap function to see the difference between pass by value OR pass by reference

#include <iostream>

void swap(int &a,int &b)
{
    int swap_value=a;
    a = b;
    b=swap_value;

    std::cout << "In swap function: " << std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;

}


int main()
{
    int x=8;
    int y=4;

    swap(x,y);

    std::cout << "In main function: " << std::endl;
    std::cout << "a: " << x << " b: " << y << std::endl;

    return 0;
}
