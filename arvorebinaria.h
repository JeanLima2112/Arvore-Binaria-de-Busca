#include <iostream>
#include <livro.h>

struct No{
    Livro livro;
    No* filhoesquerda;
    No* filhodireita;
};

class ArvoreBinariadeBusca{ //BST = binary search tree
private:
No * raiz;

public:
ArvoreBinariadeBusca();
~ArvoreBinariadeBusca();
void deletarArvore(No* Noatual);
No* obterRaiz();
bool estavazio();
bool estacheio();
void inserir(Livro livro);
void remover(Livro livro);
void removerbusca(Livro livro,No*& noatual);
void deletarNo(No*& noatual);
void obterSucessor(Livro& Livrosucessor,No* temp);
void buscar(Livro& livro, bool& busca);
void desenhaarvore(No* Noatual);
void Imprimirpreordem(No* Noatual);
void Imprimiremordem(No* Noatual);
void Imprimirposordem(No* Noatual);

};