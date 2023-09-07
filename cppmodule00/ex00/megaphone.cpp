#include <iostream>

int main(int ac, char **av)
{
    if (ac != 1)
    {
        for (int t = 1; t < ac; t++){
        
        std::string str = av[t];
        for(size_t i = 0; i < str.length(); i++){
            str[i] = toupper(str[i]);
        }
        std::cout << str;
    }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
