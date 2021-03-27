#include <iostream>
#include <string>

class Book
{
    private:
        std::string level;

    public:
        std::string name;
        std::string autor;

        void set_level(std::string secret)
        {
            level = secret;
        }

        std::string get_level()
        {
            return level;
        }
};

int main()
{
    Book book1;

    book1.set_level("advance");

    std::cout << book1.get_level() << std::endl;

    return 0;
}
