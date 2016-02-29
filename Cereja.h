#ifndef CEREJA_H
#define CEREJA_H
#include "Plants.h"


class Cereja
{
public:
    Cereja(){
        prontoParaExplodir = true;
    }
    ~Cereja();

void explodir();

protected:
    bool prontoParaExplodir;

};

class Plants : public Cereja{
    
};

#endif // CEREJA_H
