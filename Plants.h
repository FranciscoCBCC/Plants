#ifndef PLANTS_H
#define PLANTS_H

class Plants
{
public:
    Plants();
    ~Plants();

    void atacarZumbis();
    void defender();
    void mover();
    void produzirSois();

private:

    int resistencia;
    float recarga;
    int alcance;
    int habilidade;
    int dano;
    
};

#endif // PLANTS_H
