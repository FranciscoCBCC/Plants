#include "Personagem.h"

Personagem::Personagem()
{
    nomePersonagem = "Sem Nome";
    resistencia = 0;
    dano = 0;
    ativo = false;
    codigo = 0;
}

Personagem::Personagem(const string &nomePersonagem, int resistencia, int dano, int codigo)
{
    this->nomePersonagem = nomePersonagem;
    this->resistencia = resistencia;
    this->dano = dano;
    this->ativo = true;
    this->codigo = codigo;
}

Personagem::Personagem(const Personagem &personagem)
{
    this->nomePersonagem = personagem.nomePersonagem;
    this->resistencia = personagem.resistencia;
    this->dano = personagem.dano;
    this->ativo = personagem.ativo;
    this->codigo = personagem.codigo;
}

Personagem::atacar(){
    if (ativo == true && resistencia > 0){
        resistencia = resistencia-dano;
        cout << "Nome do personagem atacado: " << nomePersonagem << endl;
        cout << "Ataque realizado!" << endl;
    }
}

Personagem::defenderSe(){
    if (ativo == true && resistencia > 0){
        cout << "Nome do personagem Defendido: " << nomePersonagem << endl;
        cout << "Defeza realizada!" << endl;
    }
}

ostream &operator<<(ostream &output, const Personagem &personagem)
{
    output << "Nome Personagem: " << personagem.nomePersonagem << endl;
    output << "Resistencia: " << personagem.resistencia << endl;
    output << "Dano: " << personagem.dano << endl;
    output << "Ativo: " << personagem.ativo << endl;
    output << "Codigo: " << personagem.codigo << endl;
    return output;
}

const Personagem& Personagem::operator=(const Personagem &personagem)
{
    this->nomePersonagem =  personagem.nomePersonagem;
    this->resistencia = personagem.resistencia;
    this->dano = personagem.dano;
    this->ativo = personagem.ativo;
    this->codigo = personagem.codigo;
}

Personagem::~Personagem()
{
}

