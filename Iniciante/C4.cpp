#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int e, q, it[2] = {0,0};

    cin >> e;

    int values[100000];

    for(int i=0; i<e; i++)cin >> values[i];

    cin >> q;

    for(int i=0; i<q; i++){
        int qv;
        cin >> qv;
        for(int j=0; j<e; j++){
            if(qv == values[j]) {
                it[0]+=j+1;
                it[1]+=e-j;
                break;
            }
        }
    }

    cout << it[0] << " " << it[1];
    
    return 0;
}