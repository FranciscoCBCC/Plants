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

private:
    int qtErvilha;
//  int numPlantasVivas;

    
    
//  static Data dataVersao;
    
    
    
};

#endif // ERVILHA_H
