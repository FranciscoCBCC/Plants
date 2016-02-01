#include "Plants.h"
#include <iostream>
#include <string.h>
using std::cout;



Plants::Plants()
{
    nomePlanta = 0;
    resistencia = 100;
    recarga = 100;
    alcance = 0;
    dano = 0;
    desbloqueado = false;
}

Plants::~Plants()
{
}

void Plants::receberAtaque( )
{
    if ( !desbloqueado )
    {
        resistencia = resistencia - 10;
        cout << "Plant recebeu um ataque\n";
    }
    else
        cout << "Plant bloqueado!" << '\n';    
}

void Plants::atacarZumbis( )
{
    if ( !desbloqueado )
    {
        cout << "Plant atacou\n";
    }
    else
        cout << "Plant bloqueado!" << '\n';    
}
