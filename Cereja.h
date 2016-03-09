#ifndef CEREJA_H
#define CEREJA_H
#include "Plants.h"


class Cereja : public Plants
{
    friend ostream& operator<<(ostream &, const Cereja & );
public:
    
    Cereja();
    Cereja(const Cereja &c);
    ~Cereja();

void explodir();

protected:
    bool prontoParaExplodir;

};

#endif // CEREJA_H
