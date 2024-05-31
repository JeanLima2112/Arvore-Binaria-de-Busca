#include <iostream>
#include "arvorebinaria.h"
using namespace std;

int main(){
    ArvoreBinariadeBusca Arvorelivros;
    int opcao, id, imp;
    string titulo;
    bool busca = false;
    cout<< "\xCD\xCD\xCD BiBlioteca Mais Livros\xCD\xCD\xCD";
    do{
        
        cout << "\n\n[0] para parar o algoritmo!\n";
        cout << "[1] para inserir um Livro no inventario!\n";
        cout << "[2] para remover um livro do inventario!\n";
        cout << "[3] para buscar um livro\n";
        cout << "[4] para imprimir a arvore!\n";
        cout << "Sua Escolha:";
        cin >> opcao;

        if (opcao == 1){
            cout << "Digite o Titulo do Livro(Separe os espacos com _):";
            cin >> titulo;
            cout << "Digite o Codigo do livro:";
            cin >> id;
            Livro livro(id,titulo);
        if (Arvorelivros.estacheio()){
            cout << "A Árvore esta cheia!\n";
            cout << "Nao foi possivel inserir o elemento!\n";
        } else{            
            Arvorelivros.inserir(livro);
        }
        } else if (opcao == 2){
            cout << "Digite o COD do livro a ser removido!\n";
            cin >> id;
            Livro livro(id, " ");
            Arvorelivros.buscar(livro, busca);
            if (busca){
                Arvorelivros.remover(livro);
                cout << "Livro Removido!\n";
            }else{
                cout << "Livro nao encontrado!\n";
            }
        } else if (opcao == 3){
            cout << "Digite o COD do livro a ser buscado!\n";
            cin >> id;
            Livro livro(id, " ");
            Arvorelivros.buscar(livro, busca);
            if (busca){
                cout << "Livro encontrado!\n";
                cout<<"\xCD\xCD\xCD\xCD\xCD\xCD\n";
                cout << "Titulo: " << livro.obterTitulo() << endl;
                cout << "COD: " << livro.obterId() << endl;
                cout<<"\xCD\xCD\xCD\xCD\xCD\xCD\n\n";
            } else{
                cout << "Livro nao encontrado!\n";
            }           
        } else if (opcao == 4){
            cout<<"\n\xCD\xCD\xCD Imprimir a Arvore \xCD\xCD\xCD\n\n";
            cout << "[1] para fazer a impressao em pre ordem!\n";
            cout << "[2] para fazer a impressao em ordem!\n";
            cout << "[3] para fazer a impressao em pos ordem!\n";
            cout << "Sua Escolha:";
            cin >> imp;
            if (imp == 1){
                Arvorelivros.Imprimirpreordem(Arvorelivros.obterRaiz());
            } else if (imp == 2){
                Arvorelivros.Imprimiremordem(Arvorelivros.obterRaiz());
            } else{
                Arvorelivros.Imprimirposordem(Arvorelivros.obterRaiz());
            }                   
        }
    } while (opcao != 0);

    return 0;
}