#include <iostream>
#include <string>

struct Library
{
    std::string book_name;
    std::string autor_name;

    long show_book_id()
    {
        return book_id;
    }

    private:
        long book_id = 70012;
};

int main()
{
    Library book_1;
    book_1.book_name="Introduction to Robotics";
    book_1.autor_name="kucukcollu";

    std::cout << book_1.book_name << std::endl;
    std::cout << book_1.autor_name << std::endl;

    std::cout << book_1.show_book_id() << std::endl;

    return 0;
}
