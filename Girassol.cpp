#include "Girassol.h"

Girassol::Girassol(){
    quantidadeSois = 0;
}

Girassol::Girassol(int sois){
    quantidadeSois = sois;
    }

Girassol::~Girassol(){
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

ostream& operator<<(ostream &output, const Girassol &display)
{
	output << "\n Quantidade de sois: " << 	display.quantidadeSois;
    return output;
}