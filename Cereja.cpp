#include "Cereja.h"

Cereja::Cereja(){
    prontoParaExplodir = true;
}

Cereja::Cereja(bool status){
    prontoParaExplodir = status;
    
}

Cereja::~Cereja(){
    }
    
Cereja::explodir(){
    if (prontoParaExplodir == true){
        cout<<"\nCereja explodiu\n";
    }
    else{
        cout<<"\n Cereja não esta pronta para explodir, aguarde...\n";
    }
}

ostream& operator<<(ostream &output, const Cereja &display)
{
	output << "\n Pronto para explodir?: " << 	display.prontoParaExplodir;
    return output;
}

const Cereja & Cereja::operator=(const Cereja &cereja)
{
    static_cast<Personagem> (*this) = static_cast<Personagem> (cereja);
    this->codigo = cereja.codigo;
}