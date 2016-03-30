#include "Girassol.h"

Girassol::Girassol(){
    cout<<"Foi criado o objeto Girassol";
    quantidadeSois = 0;
}

Girassol::Girassol(int sois){
    quantidadeSois = sois;
    }

Girassol::~Girassol(){
    }
    
Girassol::defenderSe(){
    if (Personagem::receberAtaque()){
        Girassol:atacar();
    }
}
    
Girassol::atacar(){
    quantidadeDois = 2;
    cout << "\nNome da planta: ", Personagem::nomePersonagem;
    cout << "\nQuantidade de sois disparadas por segundo: ", quantidadeSois;
    cout << "\nGirassol no estagio 1";
}
    
Girassol::produzirSois(){
    if (quantidadeSois == 0){
        quantidadeSois++;
        cout<<"\nGirassol produziu sois\n";
    }
    else{
        cout<<"\nAguarde ate o Girassol produzir o proximo sol\n";
    }
}

Girassol::fazerFotossíntese(){
        if(Personagem::ativo){
            cout<<"Fazendo fotossintese...";
        }
        else
            cout<<"Girassol nao desbloqueado";
    }
    
Girassol::crescer(){
        if(Personagem::ativo){
            Personagem::resistencia++;
            cout<<"Girassol esta mais forte";
        }
        else
            cout<<"Girassol nao desbloqueado";
    }


ostream& operator<<(ostream &output, const Girassol &display)
{
	output << "\n Quantidade de sois: " << 	display.quantidadeSois;
    return output;
}

const Girassol & Girassol::operator=(const Girassol &girassol)
{
    static_cast<Personagem> (*this) = static_cast<Personagem> (girassol);
    this->codigo = girassol.codigo;
}