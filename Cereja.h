#ifndef CEREJA_H
#define CEREJA_H
#include "Plants.h"


class Cereja : public Plants
{
    friend ostream& operator<<(ostream &, const Cereja & );
public:
    const Plants &operator=(const Plants &);
    Cereja();
    Cereja(const Cereja &c);
    virtual void defenderSe();
    virtual void atacar();
    virtual void fazerFotossíntese();
    virtual void crescer();
    ~Cereja();

void explodir();

protected:
    bool prontoParaExplodir;

};

#endif // CEREJA_H
