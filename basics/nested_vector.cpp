#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> datas={
                                        {2,1,3},
                                        {4,8,9},
                                        {2,7,7}
                                        };

    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
        {
            std::cout << datas[a][b] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
