#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>
#include "User.h"

class Student : public User
{
    public:
        std::vector<std::string> taken_classes;

        void output();

};

#endif