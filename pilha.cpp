#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha(){
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
}

pilha::~pilha(){
    delete [] estrutura;
}

bool pilha::estaCheia(){
    return (tamanho == max_itens); //se for igual, ele vai retornar true (pilha cheia), senão false
}

bool pilha::estaVazia(){
    return (tamanho == 0); //se for igual, ele vai retornar true (pilha vazia), senão false
} 

void pilha::inserir(TipoItem item){
    if(estaCheia()){ //checar se a pilha tá cheia
        cout << "A pilha esta cheia! Nao eh possivel inserir o elemento." << endl;
    } else{
        estrutura[tamanho] = item; //coloca o item no topo que, no caso, é o tamanho
        tamanho++; //incrementa o tamanho já que adicionou mais 1
    }
}

TipoItem pilha::remover(){
    if(estaVazia()){ //checar se a pilha tá vazia
        cout << "A pilha esta vazia! Nao eh possivel remover elementos." << endl;
        return 0;
    } else{
        tamanho--; //decrementa já que vai remover 1
        return estrutura[tamanho]; //retorna o elementos a ser removido, no caso, o do topo
    }
} 

void pilha::imprimir(){
    cout << "Pilha: [ ";
    for(int i = 0; i < tamanho; i++){
        cout << estrutura[i] << " ";
    } cout << "]" << endl;
}

int pilha::qualTamanho(){
    return tamanho;
}
