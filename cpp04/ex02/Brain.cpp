#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; ++i)
    {
        _ideas[i] = "Default idea";
    }
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Brain copied" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
        {
            _ideas[i] = other._ideas[i];
        }
    }
    std::cout << "Brain assigned" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
    {
        return _ideas[index];
    }
    return "";
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100)
    {
        _ideas[index] = idea;
    }
}