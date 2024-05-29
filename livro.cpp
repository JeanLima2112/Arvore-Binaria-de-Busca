#include "livro.h"
using namespace std;

    Livro::Livro(){
        id = -1;
        titulo = " ";
    }
    Livro::Livro(int i,std::string t){
        id = i;
        titulo = t;

    }
    string Livro:: obterTitulo(){

        return titulo;

    }
    int Livro::obterId(){
        return id;
    } 