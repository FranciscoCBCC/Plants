#include "Ervilha.h"

Ervilha::Ervilha()
{
    cout<<"Foi criado o objeto ervilha";
}

    Ervilha::defenderSe(){
        if (Personagem::receberAtaque()){
            Ervilha:atacar();
        }
    }
    
    Ervilha::atacar(){
        qtErvilha = 2;
        cout << "\nNome da planta: ", Personagem::nomePersonagem;
        cout << "\nQuantidade de ervilhas disparadas por segundo: ", qtErvilha;
        cout << "\nErvilha no  estagio 1";
    }


Ervilha::~Ervilha()
{
}

