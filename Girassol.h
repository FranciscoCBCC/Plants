#ifndef GIRASSOL_H
#define GIRASSOL_H
#include "Plants.h"


class Girassol
{
public:
    Girassol(){
        quantidadeSois = 0;
    }
    ~Girassol();

    void produzirSois();
private:
    int quantidadeSois;
    
};


class Plants : public Girassol{
    
};

#endif // GIRASSOL_H
