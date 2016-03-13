#ifndef PLANTS_H
#define PLANTS_H
#include <iostream>
#include <string>
#include "Personagem.h"

using std::string;
using std::cout;


class Plants : public Personagem
{
    friend ostream &operator<<(ostream &,const Plants &);
public:
    const Plants &operator=(const Plants &);
    Plants();
    Plants(const Plants &);
    Plants(float, int, int);
    ~Plants();

private:
    float recarga;
    int alcance;
    int numPlantasVivas;

    
    
//  static Data dataVersao;
    
    
    
};

#endif // PLANTS_H

