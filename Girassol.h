#ifndef GIRASSOL_H
#define GIRASSOL_H
#include "Plants.h"


class Girassol : public Plants
{
    friend ostream& operator<<(ostream &, const Girassol & );
public:
    const Girassol &operator=(const Girassol &);
    Girassol();
    Girassol(const Girassol &g);
    ~Girassol();

    void produzirSois();
    virtual void defenderSe();
    virtual void atacar();
    virtual void fazerFotossíntese();
    virtual void crescer();
private:
    int quantidadeSois;
    
};




#endif // GIRASSOL_H
