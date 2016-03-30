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
             if(ervilhaPtr!=0 && zumbiEscudeiro()==true){
                 ervilhaPtr->boosterAttack();
                 cout<<"\nErvilha atacou";
                 cout<<"\nErvilha evoluiu";
             }
             personagens[i]->atacar();
             personagens[i]->defenderSe();
}
    for ( size_t j = 0; j < personagens.size(); j++ )
     {
        cout << "Deletando objeto de "                  
           << typeid( *personagens[ j ] ).nomePersonagem() << endl;

        delete personagens[ j ];
     } 
    return 0;
}
