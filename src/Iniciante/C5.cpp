#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int e, q; // e = tamanho da lista - q = tamanho da query - it = iterações para buscas
    long long it[2] = {0,0};

    cin >> e;

    map<int, int> vals;
    

    for(int i=0; i<e; i++){int v; cin >> v; vals[v] = i;} // recebe lista

    cin >> q; //recebe tamanho da query

    int qv;

    for(int i=0; i<q; i++){ //loop para receber os valores da query
        cin >> qv;
        it[0] += vals[qv]+1;
        it[1] += e-vals[qv];
    }
    cout << it[0] << " " << it[1]; // report
    
    return 0;
}