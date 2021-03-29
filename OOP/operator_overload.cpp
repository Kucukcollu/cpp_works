#include <iostream>

class MyClass
{
    public:
        double a=5;
        double b=10;

        MyClass operator + (MyClass obj)
        {
            MyClass new_obj;
            new_obj.a = a + obj.a;
            new_obj.b = b + obj.b;
            return new_obj;
        }
};

int main()
{
    MyClass obj1,obj2;

    MyClass obj3 = obj1 + obj2;

    std::cout << obj3.a << std::endl;
    std::cout << obj3.b << std::endl;

    return 0;
}
