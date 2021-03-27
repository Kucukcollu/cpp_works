#include <iostream>
#include <string>

class Book
{
    std::string level;

    public:
        std::string name;
        std::string autor;

        std::string show_level()
        {
            return level;
        }
    
        Book(std::string name, std::string autor, std::string level) // constructor
        {
            this->name = name;
            this->autor = autor;
            this->level = level;
        }
        ~Book() // destructor
        {
            std::cout << "The Destructor" << std::endl;
        }
};

int main()
{
    Book book1("Physics", "Einstein","Advance");
    
    std::cout << book1.name << std::endl;
    std::cout << book1.autor << std::endl;
    std::cout << book1.show_level() << std::endl;

    return 0;
}
