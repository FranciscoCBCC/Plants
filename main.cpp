#include <stdio.h>
#include <iostream>
#include "Personagem.h"
#include "Ervilha.h"
#include "Cereja.h"
using std::cout;
using std::cin;



int main(int argc, char **argv)
{
   vector < Personagem * > personagens( 2 );
    
    personagens.push_back(&ervilha);

        
    for (size_t i = 0; i < personagens.size(); i++) {
             Ervilha *derivedPtr = dynamic_cast<Ervilha*> (personagens[i]);
             if (derivedPtr != 0) 
                      {
                        personagem.ervilha(*derivedPtr, 10);
                         
                        cout << *derivedPtr;                         
                      }
             if (derivedPtr2 != 0)
                      {
                        personagem.cereja(*derivedPtr2, 20);
                        cout << *derivedPtr2; 
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
