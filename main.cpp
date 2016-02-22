#include <stdio.h>
#include <iostream>
using std::cout;
using std::cin;


#include "Plants.h"
int main(int argc, char **argv)
{
    Plants planta1("Girassol", 100, 100, 50, 30, );
    
    cout<<"Jogo Iniciado!\n";
    
    planta1.atacarZumbis();
    planta1.receberAtaque();
    
    
    return 0;
}
