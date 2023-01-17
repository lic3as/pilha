//IMPLEMENTAÇÃO DE UMA PILHA COM VETORES 

#include <iostream>
#include "pilha.cpp"

using namespace std;

int main(){
    pilha pilha1;
    TipoItem item;
    int opcao;

    cout << "PROGRAMA GERADOR DE PILHAS" << endl;
    do{
        cout << "Digite 0 para encerrar o programa" << endl;
        cout << "Digite 1 para inserir um novo elemento" << endl;
        cout << "Digite 2 para remover um elemento" << endl;
        cout << "Digite 3 para conferir se a pilha esta vazia" << endl;
        cout << "Digite 4 para conferir se a pilha esta cheia" << endl;
        cout << "Digite 5 para conferir o tamanho da pilha" << endl;
        cout << "Digite 6 para imprimir a pilha" << endl;

        cin >> opcao;

        if(opcao == 1){
            cout << "Digite o elemento a ser inserido: " << endl;
            cin >> item;
            pilha1.inserir(item);
        } else if(opcao == 2){
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl;
        } else if(opcao == 3){
            if(pilha1.estaVazia()){
                cout << "Pilha vazia!" << endl;
            } else{
                cout << "A pilha possui elementos." << endl;
            }
        } else if(opcao == 4){
            if(pilha1.estaCheia()){
                cout << "A pilha esta cheia!" << endl;
            } else{
                cout << "A pilha nao esta cheia." << endl;
            }
        } else if(opcao == 5){
            int tamanho = pilha1.qualTamanho();
            cout << "A pilha possui " << tamanho << " elementos." << endl;
        } else if(opcao == 6){
            pilha1.imprimir();
        } 
    } while(opcao != 0);

    return 0;
}
