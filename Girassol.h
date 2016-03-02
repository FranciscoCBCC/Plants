#ifndef GIRASSOL_H
#define GIRASSOL_H
#include "Plants.h"


class Girassol : public Plants
{
public:
    friend ostream &operator<<(ostream &, const Girassol & );
    
    Girassol();
    ~Girassol();

    void produzirSois();
private:
    int quantidadeSois;
    
};




#endif // GIRASSOL_H
