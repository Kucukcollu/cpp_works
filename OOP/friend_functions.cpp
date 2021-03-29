#include <iostream>
#include <vector>
#include <string>

class Staff
{
    std::string staff_id = "Premium";

    public:
        std::string staff_name;
        std::string staff_surname;

        friend void output_staff_id(Staff object);
};

void output_staff_id(Staff object) // friend function
{
    std::cout << object.staff_id << std::endl;
}

int main()
{
    Staff user;

    output_staff_id(user);

    return 0;
}
