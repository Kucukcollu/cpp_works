#include <iostream>
#include <string>
#include "User.h"


        int User::get_user_count()
        {
            return user_count;
        }

        User::User() // constructor
        {
            std::cout << "A user has been created." << std::endl;
            user_count++;
        }

        User::~User() // destructor
        {
            //std::cout << "A user has been deleted." << std::endl;
            user_count--;
        }

        void User::set_user_id(long id)
        {
            user_id = id;
        }

        long User::get_user_id()
        {
            return user_id;
        }

int User::user_count=0;
