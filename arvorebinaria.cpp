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
        if(estacheio()){
            cout << "Não há espaço para inserir esse livro";
        } else{
            No* NoNovo = new No;
            NoNovo-> livro;
            NoNovo->filhodireita=NULL;
            NoNovo->filhoesquerda=NULL;
            if(raiz == NULL){   
                raiz = NoNovo;
            }else{
                No* temp = raiz;
                while (temp != NULL)
                {
                    if (livro.obterId() < temp->livro.obterId()){
                        if(temp->filhoesquerda == NULL){
                            temp->filhoesquerda = NoNovo;
                            break;
                        }else{
                            temp = temp->filhoesquerda;
                        }
                    }else{
                        if(temp->filhodireita == NULL){
                            temp->filhodireita = NoNovo;
                            break;
                        } else{
                            temp = temp->filhodireita;
                        }

                    }
                }
                
            }
            
        }

    }
    void ArvoreBinariadeBusca::remover(Livro livro){

    }
    void ArvoreBinariadeBusca::buscar(Livro& livro, bool& busca){
        busca = false;
        No* noatual = raiz;
        while (noatual != NULL){
            if(livro.obterId() < noatual->livro.obterId()){
                noatual = noatual->filhoesquerda;
            }else if(livro.obterId() >noatual->livro.obterId()){
                noatual = noatual->filhodireita;
            }else{
                busca = true;
                livro = noatual->livro;
                break;
            }
    
        }
        
    }
    void ArvoreBinariadeBusca::desenhaarvore(No* Noatual){

    }
    void ArvoreBinariadeBusca::Imprimirpreordem(No* Noatual){

    }
    void ArvoreBinariadeBusca::Imprimiremordem(No* Noatual){

    }
    void ArvoreBinariadeBusca::Imprimirposordem(No* Noatual){

    }