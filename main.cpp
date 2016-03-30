#include <stdio.h>
#include <vector>
#include <iostream>
#include "Personagem.h"
#include "Ervilha.h"
#include "Girassol.h"
using std::cout;
using std::cin;
using std::vector;



int main(int argc, char **argv)
{
   vector < Personagem * > personagens( 4 );
    
    personagens.push_back(&ervilha1);
    personagens.push_back(&ervilha2);
    personagens.push_back(&girassol1);
    personagens.push_back(&girassol2);
        
    for (size_t i = 0; i < personagens.size(); i++) {
             Ervilha *ervilhaPtr = dynamic_cast<Ervilha*> (personagens[i]);
             if (ervilhaPtr != 0) 
                      {
                        personagem.ervilha1(*derivedPtr, 10);
                        cout << "Ervilha 1 Defendeu-se" << derivedPtr->defenderSe();  
                        personagem.ervilha2(*derivedPtr, 20);
                        cout << "Ervilha 2 Atacou" << derivedPtr->atacar();                       
                      }
             else
                      {
                        personagem.girassol1(*derivedPtr, 40);
                        cout << "Girassol 1 Atacou" << *derivedPtr->atacar();
                        personagem.girassol2(*derivedPtr, 30);
                        cout << "Girassol 2 Defendeu-se" <<*derivedPtr->defenderSe(); 
                      }
}
    for ( size_t j = 0; j < personagens.size(); j++ )
     {
        cout << "Deletando objeto de "                  
           << typeid( *personagens[ j ] ).nomePersonagem() << endl;

        delete personagens[ j ];
     } 
    return 0;
}
