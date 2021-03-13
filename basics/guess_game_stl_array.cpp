// guess game

#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>

// print the array
void show_STL_array(std::array<int,101> array, int size)
{
    std::cout << "Your guesses: ";

    for(int i=0;i < size;i++)
    {
        std::cout << array[i] << "\t";
    }

    std::cout << std::endl;

    std::cout << "Your total guess number: " << size << std::endl;
}


// game function
void play_game()
{
    int value=rand() % 101;
    std::cout << "[SECRET]Real number: " << value << std::endl;

    int guess;

    int loop=0;

    // create array which has 3 members
    std::array<int,101> datas;

    while(true)
    {
        std::cout << "Your try number " << loop+1 << "!" << std::endl;
        std::cout << "Guess: ";
        std::cin >> guess;

        datas[loop++]=guess;

        if(value==guess)
        {
            std::cout << "You win!" << std::endl;
            break;
        }
        else if(value > guess)
        {
            std::cout << "Your guess is low!" << std::endl;
        }
        else
        {
            std::cout << "Your guess is high!" << std::endl;
        }
    }
    show_STL_array(datas,loop); // call the function to print array
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
                std::cout << "The game will be start in one minute..." << std::endl;

                play_game();
                
                return -1;
            
            default:
                std::cout << "Invalid selection!!! Please select 0 or 1." << std::endl;
                break;
        }
    } while (true);
}
