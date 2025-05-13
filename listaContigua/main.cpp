using namespace std;
#include <iostream>
#include "listaContigua.h"

int main
{
    listaContigua l1 (10);
    for (int i = 0; i < 10; i++)
        l1.set(i+1);
    l1.imprime;
    return 0;
}