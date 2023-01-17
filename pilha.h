//pilha - stack

typedef int TipoItem; //pilha com o tipo int, se quiser mudar o tipo é só trocar aqui uma única vez, ou seja TipoItem vai ser a msm coisa que escrever int (nesse caso)
const int max_itens = 100; //tamanho máximo da pilha (constante)

class pilha{

    private:
    TipoItem tamanho;
    TipoItem* estrutura; //vetor

    public:
    pilha(); //construtora
    ~pilha(); //destrutora
    bool estaCheia(); //verifica se a pilha está cheia - isFull
    bool estaVazia(); //verifica se a pilha está vazia - isEmpty
    void inserir(TipoItem item); //inserir na pilha, a entrada é o elemento a ser inserido e não tem saída - push
    TipoItem remover(); //remover da pilha, não tem entrada mas a saída é o elemento removido (no caso, o do topo da pilha) - pop
    void imprimir(); //imprimir a pilha - print
    int qualTamanho(); //calcular o tamanho da pilha - whatSize

};
