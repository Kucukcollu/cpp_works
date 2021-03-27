#include <iostream>
#include <string>

class Garage
{
    std::string license = "09 ALI 009";

    public:
        std::string car_mark;
        std::string car_name;

        std::string show_license()
        {
            return license;
        }

};

int main()
{
    Garage car1;
    
    std::cout << "Car mark: " << car1.car_mark << std::endl;
    std::cout << "Car name: " <<  car1.car_name << std::endl;

    car1.car_mark="Ford";
    car1.car_name="Mustang 1969";

    std::cout << "Car mark: " << car1.car_mark << std::endl;
    std::cout << "Car name: " <<  car1.car_name << std::endl;
    std::cout << "Car license: " << car1.show_license() << std::endl;

    return 0;
}
