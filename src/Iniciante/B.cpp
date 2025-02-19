#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int camels;

    int spit[100][2];

    cin >> camels;

    for(int test=0; test<camels; test++){
        cin >> spit[test][0] >> spit[test][1];
    }

    bool hit = 0;
    for(int i=0; i<camels;i++){
        for(int j=i+1; j<camels;j++){
            if(spit[i][0]+spit[i][1] == spit[j][0]) if(spit[j][0]+spit[j][1] == spit[i][0]) hit = 1;
        }
    }

    cout << (hit?"YES\n":"NO\n");
    
    return 0;
}