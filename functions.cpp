#include <iostream>
#include "Computer.h"


void print_error_message()
{
    std::cerr << "No argument" << std::endl;
}

t_polynom *parse_polynom(int argc, char *str)
{
  
    int i = 0;
    size_t count;
    std::string number;
    for (size_t i = 0; i < count; i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        i = 0;
        while (isdigit(str[i]))
        {
            number += str[i];
            i++;
        
    }
    
    return 0;
}
