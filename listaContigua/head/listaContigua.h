#ifndef LISTACONTIGUA_H_INCLUDED
#define LISTACONTIGUA_H_INCLUDED

class listaContigua
{
    public:
        listaContigua(int tam);
        ~listaContigua();
        int get (int k);
        void set (int k, int val);
        void insereFinal(int val);    // insere no final
        void removeFinal();           // remove ultimo
        void insereK(int k, int val); // antes de xk
        void removeK(int k);          // remove xk
        void insereInicio(int val);   // insere no inicio
        void removeInicio();          // remove primeiro
        void imprime();
        int buscaMaior(int val);
        void limpar();
    private:
        int *vet;
        int max; //tamanho do vetor
        int n; //tamanho da lista
        void aumentandoCapacidade();
};

#endif