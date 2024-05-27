#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"


using namespace std;

    ArvoreBinariadeBusca::ArvoreBinariadeBusca(){ // contrutora
        raiz = NULL;
    }
    ArvoreBinariadeBusca::~ArvoreBinariadeBusca(){//destrutor

    }
    void ArvoreBinariadeBusca::deletarArvore(No* Noatual){

    }
    No* ArvoreBinariadeBusca::obterRaiz(){
        return raiz;
    }
    bool ArvoreBinariadeBusca::estavazio(){
        return (raiz == NULL);
    }
    bool ArvoreBinariadeBusca::estacheio(){
        try{
            No* temp = new No;
            delete temp;
            return false;
        }catch(bad_alloc exception){
            return true;

        }

    }
    void ArvoreBinariadeBusca::inserir(Livro livro){

    }
    void ArvoreBinariadeBusca::remover(Livro livro){

    }
    void ArvoreBinariadeBusca::buscar(Livro& livro, bool& busca){

    }
    void ArvoreBinariadeBusca::desenhaarvore(No* Noatual){

    }
    void ArvoreBinariadeBusca::Imprimirpreordem(No* Noatual){

    }
    void ArvoreBinariadeBusca::Imprimiremordem(No* Noatual){

    }
    void ArvoreBinariadeBusca::Imprimirposordem(No* Noatual){

    }