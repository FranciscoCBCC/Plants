#include "Plants.h"
#include <iostream>
#include <string>
using std::cout;

Plants::Plants()
{
    recarga = 100;
    alcance = 0;
    numPlantasVivas = 0;
}

Plants::Plants(int recarga, int alcance, int numPlantasVivas){
    this->recarga = recarga;
    this->alcance = alcance;
    this->numPlantasVivas = numPlantasVivas;
}

Plants::Plants(const Plants &plants)
{
    this->recarga = plants.recarga;
    this->alcance = plants.alcance;
    this->numPlantasVivas = plants.numPlantasVivas;
}

ostream &operator<<(ostream &output,const Plants &plants)
{
    output << static_cast <Personagem> (plants);
    output << "\nNome Plants: " << plants.nomePersonagem;
    return output;
}

const Plants & Plants::operator=(const Plants &plants)
{
    static_cast<Personagem> (*this) = static_cast<Personagem> (plants);
    this->codigo = plants.codigo;
}

Plants::~Plants()
{
}
 

void Plants::definirNumPlantas(int numPlantas)
{
    do 
    {
        numPlantas++;
    }
    while(desbloqueado);
}