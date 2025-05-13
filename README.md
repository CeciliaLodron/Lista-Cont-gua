Lista Contigua

Atividades:

1. Considerando o TAD ListaContigua que representa uma lista contígua, faça uma função para
trocar de posição dois elementos na lista. A função deve retornar se a operação foi possível ou
não.
bool ListaContigua::troca (int posicao1, int posicao2 );

2. Considerando o TAD ListaContigua que representa uma lista contígua, faça uma função para
aumentar a capacidade máxima (definida por max) do vetor que representa a lista sem que
nenhum dado atualmente representado na lista seja perdido. Se a nova capacidade definida
pelo parâmetro novoMax for menor que a capacidade atual, a operação não deve fazer nada.
Ao final retornar se a operação foi ou não realizada.
bool ListaCont::aumentaCapacidade (int novoMax );
