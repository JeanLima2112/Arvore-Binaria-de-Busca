#include <iostream>
using namespace std;

class Livro{
    private:
    int id;
    std::string titulo;

    public:
    Livro();
    Livro(int id,std::string t);
    string obterTitulo();
    int obterId();

};