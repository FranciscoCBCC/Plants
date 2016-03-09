#ifndef PLANTS_H
#define PLANTS_H
#include <string>
using std::string;

class Plants : public Personagem
{
public:
    Plants();
    Plants(const Plants &p);
    ~Plants();

    void definirDataVersao(Data);
    void definirNumPlantas(int);
    static void alterarNumPlantasVivas(int);

private:

    float recarga;
    int alcance;
    int dano;
    bool desbloqueado;
    Data dataVersao;
    int numPlantasVivas;

    
    
//  static Data dataVersao;
    
    
    
};

#endif // PLANTS_H

