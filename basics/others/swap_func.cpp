// swap values with template

#include <iostream>
#include <string>

/*
void swap(int &a,int &b)
{
    int swap_value=a;
    a = b;
    b=swap_value;

    std::cout << "In integer swap function: " << std::endl;
    std::cout << "x: " << a << " y: " << b << std::endl;

}

void swap(std::string &word1, std::string &word2)
{
    std::string temp;
    temp = word1;
    word1 = word2;
    word2 = temp;

    std::cout << "In string swap function: " << std::endl;
    std::cout << "a: " << word1 << " b: " << word2 << std::endl;
}
*/

template <typename T>
void swap(T &a,T &b)
{
    T swap_value;
    swap_value = a;
    a=b;
    b=swap_value;

    std::cout << "In templated swap function !!!" << std::endl;
    std::cout << "a: " << a << " b: " << b << std::endl;
}


template <typename T>
void swap_array(T a[],T b[], int size)
{
    for(int i=0;i < size;i++)
    {
        T swap_array;
        swap_array = a[i];
        a[i] = b[i];
        b[i] = swap_array;
    }
}

int main()
{

    int number1=8;
    int number2=4;
    std::cout << "In main function: " << std::endl;
    std::cout << "number 1: " << number1 << " number 2: " << number2 << std::endl;
    swap(number1,number2);

    std::string word1="robot";
    std::string word2="mobile";
    std::cout << word1 << " " << word2 << std::endl;
    swap(word1,word2);
    std::cout << word1 << " " << word2 << std::endl;


    int odds[] = {1,3,5,7,9};
    int evens[] = {0,2,4,6,8};

    for(int i=0;i<5;i++)
    {
        std::cout << evens[i] << "\t";
    }

    std::cout << "\n";

    for(int i=0;i<5;i++)
    {
        std::cout << odds[i] << "\t";
    }
    
    std::cout << "\n";

    swap_array(evens,odds,5);

    for(int i=0;i<5;i++)
    {
        std::cout << evens[i] << "\t";
    }

    std::cout << "\n";

    for(int i=0;i<5;i++)
    {
        std::cout << odds[i] << "\t";
    }

    std::cout << "\n";

    return 0;
}
