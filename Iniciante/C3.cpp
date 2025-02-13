#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int e, q, it[2] = {0,0};

    cin >> e;

    int values[1000000];

    for(int i=0; i<e; i++)cin >> values[i];

    cin >> q;

    for(int i=0; i<q; i++){
        int qv;
        cin >> qv;
        for(int j=0, found=0; j<e, found<3; j++){
            if(!(found & 1)){
                it[0]++;
                if(values[j]==qv) found|=1;
            }
            if(!(found & 2)){
                it[1]++;
                if(values[e-1-j]==qv) found|=2;
            }
        }
    }

    cout << it[0] << " " << it[1];
    
    return 0;
}