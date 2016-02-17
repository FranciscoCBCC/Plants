#ifndef PLANTS_H
#define PLANTS_H
#include <string>
using std::string;

class Plants
{
public:
    Plants();
    Plants(string nomePlanta);
    Plants(const Plants &);
    ~Plants();

    void atacarZumbis();
    void receberAtaque();
    void mover();
    void produzirSois();
//  void definirDataVersao(Data);
    void definirNumPlantas(int);

private:

    string nomePlanta;
    int resistencia;
    float recarga;
    int alcance;
    int dano;
    bool desbloqueado;
    static int numPlantas;
//  static Data dataVersao;
    
    
    
};

#endif // PLANTS_H

