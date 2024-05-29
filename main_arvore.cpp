#include <iostream>
#include "arvorebinaria.h"

using namespace std;

int main(){
    ArvoreBinariadeBusca Arvorelivros;
    int opcao, id, imp;
    string titulo;
    bool busca = false;
    int mtx [63];

    do{
        cout << "Digite 0 para parar o algoritmo!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para buscar um elemento!\n";
        cout << "Digite 4 para imprimir a arvore!\n";
        cout << "Digite 5 para testar\n";
        cin >> opcao;

        if (opcao == 1){
            /*cout << "Digite o nome do aluno:\n";
            cin >> titulo;*/
            cout << "Digite o RA do aluno:\n";
            cin >> id;
            Livro livro(id, "teste");
        if (Arvorelivros.estacheio()){
            cout << "A Árvore esta cheia!\n";
            cout << "Nao foi possivel inserir o elemento!\n";
        } else{            
            Arvorelivros.inserir(livro);
        }
        } else if (opcao == 2){
            cout << "Digite o RA do aluno a ser removido!\n";
            cin >> id;
            Livro livro(id, " ");
            Arvorelivros.remover(livro);
        } else if (opcao == 3){
            cout << "Digite o RA do aluno a ser buscado!\n";
            cin >> id;
            Livro livro(id, " ");
            Arvorelivros.buscar(livro, busca);
            if (busca){
                cout << "Elemento encontrado!\n";
                cout << "Nome: " << livro.obterTitulo() << endl;
                cout << "RA: " << livro.obterId() << endl;
            } else{
                cout << "Elemento nao encontrado!\n";
            }           
        } else if (opcao == 4){
            cout << "Digite 1 para fazer a impressao em pre ordem!\n";
            cout << "Digite 2 para fazer a impressao em ordem!\n";
            cout << "Digite 3 para fazer a impressao em pos ordem!\n";
            cin >> imp;
            if (imp == 1){
                Arvorelivros.Imprimirpreordem(Arvorelivros.obterRaiz());
            } else if (imp == 2){
                Arvorelivros.Imprimiremordem(Arvorelivros.obterRaiz());
            } else{
                Arvorelivros.Imprimirposordem(Arvorelivros.obterRaiz());
            }                   
        }else if (opcao==5)
        {
            Arvorelivros.desenharArvore(Arvorelivros.obterRaiz(),1);
        }
        
    } while (opcao != 0);

    return 0;
}