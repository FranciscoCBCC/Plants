#include "Plants.h"
#include <iostream>
#include <string>
using std::cout;

int Plants::numPlantas = 0;

Plants::Plants()
{
    recarga = 100;
    alcance = 0;
    dano = 0;
    desbloqueado = false;
    numPlantas = 0;
}

Plants::Plants(string nomePlanta, int resistencia, int recarga, int alcance, int dano, bool desbloqueado){
    nomePlanta = nomePlanta;
    resistencia = resistencia;
    recarga = recarga;
    alcance = alcance;
    dano = dano;
    desbloqueado = desbloqueado;
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

void Plants::definirNumPlantas(int numPlantas)
{
    do 
    {
        numPlantas++;
    }
    while(desbloqueado);
}