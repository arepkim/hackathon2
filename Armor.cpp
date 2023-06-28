#include "Armor.h"
#include "Armor.h"

char Armor::getAtkStar() const
{
    char atkstar;

    if ((atkpower >= 0) && (atkpower < 500))
        atkstar = 'C';
    else if ((atkpower >= 500) && (atkpower < 1000))
        atkstar = 'B';
    else
        atkstar = 'A';

    return atkstar;
}
