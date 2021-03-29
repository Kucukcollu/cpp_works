#ifndef USER_H
#define USER_H

class User
{
    private:
        long user_id;
        static int user_count;
    public:
        std::string user_name;
        std::string user_surname;

        static int get_user_count();

        User();

        ~User();

        void set_user_id(long id);

        long get_user_id();
};


#endif
