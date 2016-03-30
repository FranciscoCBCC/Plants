#ifndef ERVILHA_H
#define ERVILHA_H

class Ervilha : public Plants

{
//    friend ostream &operator<<(ostream &,const Plants &);
public:
//    const Plants &operator=(const Plants &);
    Ervilha();
    ~Ervilha();
//    Plants(const Plants &);
//    Plants(float, int, int);

    virtual void defenderSe();
    virtual void atacar();
    virtual void fazerFotossíntese();
    virtual void crescer();
    void boosterAttack();

private:
    int qtErvilha;
    int levelAttack;
//  int numPlantasVivas;

    
    
//  static Data dataVersao;
    
    
    
};

#endif // ERVILHA_H
