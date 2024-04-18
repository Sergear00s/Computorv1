#ifndef __COMPUTE__
# define __COMPUTE__ 



#include <iostream>
#include <stack>


typedef struct s_polynom
{
    int degree;
    char terms[100][100];
    char signs[100];
    std::stack<int> numbers_stack;
    std::stack<char> signs_stack;

} t_polynom;




#endif