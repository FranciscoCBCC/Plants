#include Cereja

Cereja::Cereja{
    prontoParaExplodir = true;
}

Cereja::Cereja(bool status){
    prontoParaExplodir = status;
    
}

Cereja::~Cereja(){
    }
    
Cereja::explodir(){
    if (prontoParaExplodir == true){
        cout<<"\nCereja explodiu\n";
    }
    else{
        cout<<"\n Cereja não esta pronta para explodir, aguarde...\n";
    }
}