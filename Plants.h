#ifndef PLANTS_H
#define PLANTS_H
#include <string>
using std::string;

class Plants
{
public:
    Plants();
    Plants(string, int, int, int, int, bool);
    ~Plants();

    void atacarZumbis();
    void receberAtaque();
    void mover();
    void definirDataVersao(Data);
    void definirNumPlantas(int);
    static void alterarNumPlantasVivas(int);

private:

    string nomePlanta;
    int resistencia;
    float recarga;
    int alcance;
    int dano;
    bool desbloqueado;
    Data dataVersao;
    int numPlantasVivas;

    
    
//  static Data dataVersao;
    
    
    
};

#endif // PLANTS_H

