#ifndef TEACHER_H
#define TEACHER_H

#include <vector>
#include <string>
#include "User.h"

class Teacher : public User
{
    public:
        std::vector<std::string> given_classes;

        void output();

};

#endif
