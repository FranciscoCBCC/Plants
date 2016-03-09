#ifndef GIRASSOL_H
#define GIRASSOL_H
#include "Plants.h"


class Girassol : public Plants
{
    friend ostream& operator<<(ostream &, const Girassol & );
public:
    
    Girassol();
    Girassol(const Girassol &g);
    ~Girassol();

    void produzirSois();
private:
    int quantidadeSois;
    
};




#endif // GIRASSOL_H
