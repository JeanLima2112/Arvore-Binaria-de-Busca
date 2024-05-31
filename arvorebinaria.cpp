#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"

using namespace std;
    ArvoreBinariadeBusca::ArvoreBinariadeBusca(){ // contrutora
        raiz = NULL;
    }
    ArvoreBinariadeBusca::~ArvoreBinariadeBusca(){//destrutor
        deletarArvore(raiz);
    }
    void ArvoreBinariadeBusca::deletarArvore(No* Noatual){
        if (Noatual!=NULL){
            deletarArvore(Noatual->filhoesquerda);
            deletarArvore(Noatual->filhodireita);
            delete Noatual;
        }
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
            NoNovo-> livro = livro;
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
        removerbusca(livro,raiz);
    }
    void ArvoreBinariadeBusca::removerbusca(Livro livro,No*& noatual){
        if(livro.obterId()<noatual->livro.obterId()){
            removerbusca(livro, noatual->filhoesquerda);
        }else if(livro.obterId()>noatual->livro.obterId()){
            removerbusca(livro, noatual->filhodireita);
        }else{
            deletarNo(noatual);
        }
    }
    void ArvoreBinariadeBusca::deletarNo(No*& noatual){
        No* temp = noatual;
        if(noatual->filhoesquerda == NULL){
            noatual = noatual->filhodireita;
            delete temp;
        } else if(noatual->filhodireita == NULL) {
            noatual = noatual->filhoesquerda;
            delete temp;
        }else{
            Livro LivroSucessor;
            obterSucessor(LivroSucessor,noatual);
            noatual-> livro = LivroSucessor;
            removerbusca(LivroSucessor,noatual->filhodireita);
        }
    }
    void ArvoreBinariadeBusca::obterSucessor(Livro& Livrosucessor,No* temp){
        temp = temp->filhodireita;
        while(temp -> filhoesquerda != NULL){
            temp = temp ->filhoesquerda;
        }
        Livrosucessor =temp->livro;
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
    void ArvoreBinariadeBusca::Imprimirpreordem(No* Noatual){
        if(Noatual!=NULL){
            cout << Noatual->livro.obterTitulo()<<" - ";
            cout << Noatual->livro.obterId() << endl;
            Imprimiremordem(Noatual->filhoesquerda);
            Imprimiremordem(Noatual->filhodireita); 
        }
    }
    void ArvoreBinariadeBusca::Imprimiremordem(No* Noatual){
        if(Noatual!=NULL){
            Imprimiremordem(Noatual->filhoesquerda);
            cout << Noatual->livro.obterTitulo()<<" - ";
            cout << Noatual->livro.obterId() << endl;
            Imprimiremordem(Noatual->filhodireita);
        }
    }
    void ArvoreBinariadeBusca::Imprimirposordem(No* Noatual){
         if(Noatual!=NULL){
            Imprimirposordem(Noatual->filhoesquerda);
            Imprimirposordem(Noatual->filhodireita);
            cout << Noatual->livro.obterTitulo()<<" - ";
            cout << Noatual->livro.obterId() << endl;
        }
    }
