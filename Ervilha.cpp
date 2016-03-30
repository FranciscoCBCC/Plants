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

    Ervilha::fazerFotossíntese(){
        if(Personagem::ativo){
            cout<<"Fazendo fotossintese...";
            Personagem::resistencia++;
            Ervilha::levelAttack++;
            
        }
        else
            cout<<"Ervilha nao desbloqueada";
    }
    
    Ervilha::crescer(){
        if(Personagem::ativo){
            Personagem::resistencia++;
            cout<<"Ervilha esta mais forte";
        }
        else
            cout<<"Ervilha nao desbloqueada";
    }
    
    Ervilha::boosterAttack(){
        if(Personagem::ativo){
            Ervilha::levelAttack++;
            cout<<"O ataque esta mais forte";
        }
        else
            cout<<"Nao pode aumentar o ataque, ervilha bloqueada";
        
    }

Ervilha::~Ervilha()
{
}

