#include <stdio.h>
#include <iostream>
#include "Personagem.h"
using std::cout;
using std::cin;



int main(int argc, char **argv)
{
   vector < Personagem * > personagens( 4 );
    
    personagens.push_back(&ervilha1);
    personagens.push_back(&ervilha2);
    personagens.push_back(&cereja1);
    personagens.push_back(&cereja2);
        
    return 0;
}
