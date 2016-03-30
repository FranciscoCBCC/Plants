#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <iostream>
#include <string>

using std::string;
using std::cout;

using namespace std;

class Personagem
{
//    friend ostream & operator<<(ostream &, const Personagem &);
public:
    Personagem();
    Personagem(const string &, int, int, int);
//    Personagem(const Personagem &);
    
    ~Personagem();
//    const Personagem &operator=(const Personagem &);
    virtual void defenderSe() = 0;
    virtual void atacar() = 0;
    void receberAtaque();
  
//  virtual void definirDataVersao(Data);
        
protected:
    string nomePersonagem;
    int vida;
    int resistencia;
    int dano;
    bool ativo;
    int codigo;
    int life;
//    Data dataVersao;
    
};

#endif // PERSONAGEM_H
