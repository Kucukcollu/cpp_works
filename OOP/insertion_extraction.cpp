#include <iostream>
#include <vector>
#include <string>

class Staff
{
    std::string staff_id;

    public:
        std::string staff_name;
        std::string staff_surname;

};

std::ostream& operator << (std::ostream& output, Staff user)
{
    output << "First name: " << user.staff_name << std::endl;
    output << "Last name: " << user.staff_surname << std::endl;

    return output;
}

std::istream& operator >> (std::istream& input, Staff &user)
{
    input >> user.staff_name >> user.staff_surname;
    return input;
}

int main()
{
    Staff object;

    std::cin >> object;

    std::cout << object << std::endl;

    return 0;
}
