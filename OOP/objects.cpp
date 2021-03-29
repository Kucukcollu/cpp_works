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

bool is_exist(std::vector<Staff> &employee_list, Staff personnel)
{
    for(int j=0;j<employee_list.size();j++)
    {
        if(employee_list[j].staff_name == personnel.staff_name && 
        employee_list[j].staff_surname == personnel.staff_surname)
        {
            return true;
        }
    }
    std::cout << "The employee could not find !!!" << std::endl;
    return false;
}

int main()
{
    Staff employee1, employee2, employee3, employee4;
    
    std::vector<Staff> employees;

    employee1.staff_name="Albert";
    employee1.staff_surname="Einstein";

    employee2.staff_name="Richard";
    employee2.staff_surname="Feynman";

    employee3.staff_name="Isaac";
    employee3.staff_surname="Newton";

    employee4.staff_name="Ernst";
    employee4.staff_surname="Mach";

    employees.push_back(employee1);
    employees.push_back(employee2);
    employees.push_back(employee3);
    employees.push_back(employee4);

    for(int i=0;i<employees.size();i++)
    {
        std::cout << "Employee name: " << employees[i].staff_name << "\t";
        std::cout << "Employee surname: " << employees[i].staff_surname << std::endl;
    }

    Staff new_employee;

    new_employee.staff_name="Johannes";
    new_employee.staff_surname="Kepler";

    std::cout << is_exist(employees,new_employee) << std::endl;

    return 0;
}
