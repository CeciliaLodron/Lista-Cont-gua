using namespace std;
#include <iostream>
#include "listaContigua.h"

listaContigua::listaContigua(int tam)
{
    max = tam;
    n = 0;
    vet = new int [max];
}

listaContigua::~listaContigua()
{
    delete [] vet;
}

int listaContigua::get(int k)
{
    if (k >= 0 && k < n)
        return vet[k];
    cout << "Posição inválida" << endl;
    exit(1);    
}

void listaContigua::set(int k, int val)
{
    if (k >= 0 && k < n)
        vet[k] = val;
    else
        cout << "Posição inválida" << endl;
}

void listaContigua::insereFinal(int val)
{
    if (n = max)
        aumentaCapacidade();
    vet(n++) = val;
}

void listaContigua::removeFinal()
{
    if (n == 0)
        cout << "Lista vazia" << endl;
    else
        n--;
}        

void listaContigua::insereK(int k, int val)
{
    if (n = max)
        aumentandoCapacidade();
    for (int i = n; i > k; i--)
        vet[i] = vet[i-1]; //aloca os valores para posições posteriores
    vet[k] = val;
    n++;
}

void listaContigua::removeK(int k)
{
    if(k < 0 || k >= n)
        cout << "ERRO: Posicao invalida" << endl;
    else
    {
        for (int i = n; i > k; i--)
            vet[i] = vet[i+1];
        n--;
    }
}

void listaContigua::insereInicio(int val)
{
    for (int i = n; i > 0; i--)
        vet[i] = vet[i-1]
    vet[0] = val;
    n++;
}

void listaContigua::removeInicio()
{
    for (int i = n; i > 0; i--)
        vet[i] = vet[i+1];
    n--;
}

void listaContigua::imprime()
{
    cout << "Lista: " << endl;
    for (int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

int listaContigua::buscaMaior(int val)
{
    int maior = val;
    for (int i = 0; i < n; i++)
    {
        if(maior < vet[i])
            maior = vet[i];
    }
    return maior;
}

void listaContigua::limpar()
{
    n = 0;
}      

void listaContigua::aumentandoCapacidade()
{
    //cria um vetor para armazenar o antigo e 
    cout << "Vetor cheio" << endl << "Aumentando capacidade..." << endl;
    max = max*2;
    int *temp = new int [max];
    for (int i = 0; i < n; i++)
        temp[i] = vet[i];
    delete [] vet;
    vet = temp;
}