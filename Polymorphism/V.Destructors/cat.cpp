#include "cat.h"

Cat::Cat(std::string_view fur_style, std::string_view description)
    : Feline(fur_style, description)
{
}

Cat::~Cat()
{
    std::cout << "destructors for Animals called" << std::endl;
}

