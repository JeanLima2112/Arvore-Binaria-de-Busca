#include <iostream>
#include "arvorebinaria.h" 
using namespace std;

int main() {
    ArvoreBinariadeBusca Arvorelivros;
    int opcao, id, imp;
    string titulo;
    bool busca = false;

    cout << "\xCD\xCD\xCD BiBlioteca Mais Livros\xCD\xCD\xCD";

    // Inserindo os livros pré-definidos na árvore
    {
        std::string titulo = "Dom_Quixote";
        int id = 41;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "Crime_e_Castigo";
        int id = 20;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "O_Pequeno_Príncipe";
        int id = 65;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "Orgulho_e_Preconceito";
        int id = 11;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "Cem_Anos_de_Solidao";
        int id = 29;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "Harry_Potter_e_a_Pedra_Filosofal";
        int id = 50;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "A_Metamorfose";
        int id = 91;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "A_Revolucao_dos_Bichos";
        int id = 1;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "O_Senhor_dos_Aneis";
        int id = 15;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "O_Sol_e_para_Todos";
        int id = 27;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "A_Culpa_e_das_Estrelas";
        int id = 32;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "Os_Miseraveis";
        int id = 45;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "Fahrenheit_451";
        int id = 55;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    {
        std::string titulo = "Moby_Dick";
        int id = 72;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }
    {
        std::string titulo = "Percy_Jackson";
        int id = 99;
        Livro livro(id, titulo);
        Arvorelivros.inserir(livro);
    }

    do {
        cout << "\n\n[0] para parar o algoritmo!\n";
        cout << "[1] para inserir um Livro no inventario!\n";
        cout << "[2] para remover um livro do inventario!\n";
        cout << "[3] para buscar um livro\n";
        cout << "[4] para imprimir a arvore!\n";
        cout << "Sua Escolha:";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Digite o Titulo do Livro (Separe os espacos com _): ";
            cin >> titulo;
            cout << "Digite o Codigo do livro: ";
            cin >> id;
            Livro livro(id, titulo);
            if (Arvorelivros.estacheio()) {
                cout << "A Árvore está cheia!\n";
                cout << "Não foi possível inserir o elemento!\n";
            } else {
                Arvorelivros.inserir(livro);
            }
        } else if (opcao == 2) {
            cout << "Digite o COD do livro a ser removido: ";
            cin >> id;
            Livro livro(id, " "); // Criando um livro com título vazio para realizar a busca
            Arvorelivros.buscar(livro, busca);
            if (busca) {
                Arvorelivros.remover(livro);
                cout << "Livro Removido!\n";
            } else {
                cout << "Livro não encontrado!\n";
            }
        } else if (opcao == 3) {
            cout << "Digite o COD do livro a ser buscado: ";
            cin >> id;
            Livro livro(id, " "); // Criando um livro com título vazio para realizar a busca
            Arvorelivros.buscar(livro, busca);
            if (busca) {
                cout << "Livro encontrado!\n";
                cout << "\xCD\xCD\xCD\xCD\xCD\xCD\n";
                cout << "Titulo: " << livro.obterTitulo() << endl;
                cout << "COD: " << livro.obterId() << endl;
                cout << "\xCD\xCD\xCD\xCD\xCD\xCD\n\n";
            } else {
                cout << "Livro não encontrado!\n";
            }
        } else if (opcao == 4) {
            cout << "\n\xCD\xCD\xCD Imprimir a Arvore \xCD\xCD\xCD\n\n";
            cout << "[1] para fazer a impressao em pre ordem!\n";
            cout << "[2] para fazer a impressao em ordem!\n";
            cout << "[3] para fazer a impressao em pos ordem!\n";
            cout << "Sua Escolha:";
            cin >> imp;
            if (imp == 1) {
                Arvorelivros.Imprimirpreordem(Arvorelivros.obterRaiz());
            } else if (imp == 2) {
                Arvorelivros.Imprimiremordem(Arvorelivros.obterRaiz());
            } else {
                Arvorelivros.Imprimirposordem(Arvorelivros.obterRaiz());
            }
        }
    } while (opcao != 0);

    return 0;
}