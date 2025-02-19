#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int e, q, it[2] = {0,0}; // e = tamanho da lista - q = tamanho da query - it = iterações para buscas

    cin >> e;

    int values[1000000]; //taanho baseado no enunciado

    for(int i=0; i<e; i++)cin >> values[i]; // recebe lista

    cin >> q; //recebe tamanho da query

    int qv;

    for(int i=0; i<q; i++){ //loop para receber os valores da query
        cin >> qv; // recebe um valor da query

        for(int j=0; j<e; j++){ //buscar esse valor
            if(qv == values[j]) { //valor encontrado?
                it[0]+=j+1; // iterações soma com o contador, busca ->
                it[1]+=e-j; // calculo para busca <-
                break; //quebra o loop
            }
        }
    }

    cout << it[0] << " " << it[1]; // report
    
    return 0;
}