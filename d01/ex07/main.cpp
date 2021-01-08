#include <iostream>
#include <fstream>

std::string process(std::string buffer, std::string s1, std::string s2)
{
    size_t i;

    while((i = buffer.find(s1)) != std::string::npos)
   {
        buffer.erase(i, s1.length());
        buffer.insert(i, s2);
   }
    return buffer;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Wrong args !" << std::endl;
        return 0;
    }

    std::string s1(av[2]);
    std::string s2(av[3]);
    std::string file(av[1]);

    if (s1.length() == 0 || s2.length() == 0)
    {
        std::cout << "Wrong string !" << std::endl;
        return 0;
    }

    std::ifstream in(file);
    std::ofstream out(file.append(".replace"));
    std::string buffer;

    if (in.fail())
    {
        std::cout << "File can not be opened !" << std::endl;
        return 0;
    }
    while(std::getline(in, buffer))
    {
        std::string tmp = process(buffer, s1, s2);
        out << tmp << std::endl;
    }
    out.close();
    in.close();
}