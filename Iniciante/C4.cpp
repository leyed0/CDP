#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int e, q, it[2] = {0,0}; // e = tamanho da lista - q = tamanho da query - it = iterações para buscas

    cin >> e;

    int values[100000];

    for(int i=0; i<e; i++)cin >> values[i]; // reebe lista

    cin >> q;

    for(int i=0; i<q; i++){
        int qv;
        cin >> qv; // reebe um mvalor da query
        for(int j=0; j<e; j++){ //buscar esse valor
            if(qv == values[j]) {
                it[0]+=j+1; //encontrou na busca ->
                it[1]+=e-j; // calculo para busca <-
                break;
            }
        }
    }

    cout << it[0] << " " << it[1]; // report
    
    return 0;
}