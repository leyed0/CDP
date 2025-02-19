#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int e, q, it[2] = {0,0};

    cin >> e;

    vector<int> values(e);

    for(int i=0; i<e; i++)cin >> values[i];

    cin >> q;

    vector<int> query(q);

    for(int i=0; i<q; i++)cin >> query[i];

    for(auto v : query){
        for(int i=0; i<e;i++){
            it[0]++;
            if(v == values[i]) break;
        }
        for(int i=e-1; i>=0;i--){
            it[1]++;
            if(v == values[i]) break;
        }
    }

    cout << it[0] <<" " <<it[1] <<"\n";
    
    return 0;
}