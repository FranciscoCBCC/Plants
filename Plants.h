#ifndef PLANTS_H
#define PLANTS_H

class Plants
{
public:
    Plants();
    ~Plants();

    void atacarZumbis();
    void receberAtaque();
    void mover();
    void produzirSois();

private:

    char nomePlanta;
    int resistencia;
    float recarga;
    int alcance;
    int dano;
    bool desbloqueado;
    
};

#endif // PLANTS_H
