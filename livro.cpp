#include "livro.h"
using namespace std;

    Livro::Livro(){
        id = -1;
        titulo = " ";
    }
    Livro::Livro(int id,std::string t){
        id = id;
        titulo = t;

    }
    string Livro:: obterTitulo(){

        return titulo;

    }
    int Livro::obterId(){
        return id;
    } 