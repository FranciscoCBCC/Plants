#ifndef CEREJA_H
#define CEREJA_H
#include "Plants.h"


class Cereja : public Plants
{
public:
    friend ostream &operator<<(ostream &, const Cereja & );
    Cereja();
    Cereja(bool);
    ~Cereja();

void explodir();

protected:
    bool prontoParaExplodir;

};

#endif // CEREJA_H
