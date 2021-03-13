#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

void show_vector(std::vector<int> vector)
{
    for(int i=0;i<vector.size();i++)
    {
        std::cout << vector[i] << "\t";
    }

    std::cout << std::endl;

}

void play_game()
{
    int value=rand() % 101;
    std::cout << "Real number: " << value << std::endl;

    int guess;

    std::vector<int> datas;

    while(true)
    {
        std::cout << "Guess: ";
        std::cin >> guess;

        datas.push_back(guess);

        if(value==guess)
        {
            std::cout << "You win!" << std::endl;
            show_vector(datas);
            break;
        }
        else if(value > guess)
        {
            std::cout << "your guess is low!" << std::endl;
        }
        else
        {
            std::cout << "your guess is high!" << std::endl;
        }
    }
}

int main()
{
    srand(time(NULL));
    
    do
    {
        int selection;
        std::cout << "0.Quit\n1.Play Guessing Game" << std::endl;
        std::cin >> selection;

        switch (selection)
        {
            case 0:
                std::cout << "Program has been ended!" << std::endl;
                return -1;
            
            case 1:
                std::cout << "The Game will be start in one minute..." << std::endl;

                play_game();
                
                return -1;
            
            default:
                std::cout << "Invalid selection!!! Please select 0 or 1." << std::endl;
                break;
        }
    } while (true);
}
