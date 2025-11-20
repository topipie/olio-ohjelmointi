#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
private:

public:
    ItalianChef(string name);
    string getName();
    void makePasta();
    ~ItalianChef();
};

#endif // ITALIANCHEF_H
