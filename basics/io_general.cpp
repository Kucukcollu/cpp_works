// understanding read-write from file principle

#include <iostream>
#include <fstream> // c++ file read-write library which includes "ofstream" and "ifstream"
#include <string>
#include <vector>

int main()
{
    // to write on the file use "ofstream"
    std::ofstream write_file;

    write_file.open("lecture.notes.txt");

    if(write_file.is_open())
    {
        write_file << "line1" << std::endl;
        write_file << "line2" << std::endl;
        write_file << "line3" << std::endl;
        write_file << "line4" << std::endl;
    }
    else
    {
        std::cout << "The file could not opened!!!" << std::endl;
    }

    // to read from the file use "ifstream"
    std::ifstream read_file;

    read_file.open("lecture.notes.txt");

    std::string words;
    std::vector<std::string> lines;

    while(read_file >> words)
    {
        lines.push_back(words);
    }

    for(std::string index : lines)
    {
        std::cout << index << std::endl;
    }

    write_file.close();
    read_file.close();

    return 0;
}
