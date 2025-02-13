#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int testCount;

    cin >> testCount;

    for(int test=0; test<testCount; test++){

        int gridSize;
        cin >> gridSize;
        
        bool triangle = 0;

        string line;

        for(int lin=0; lin<gridSize; lin++){

            cin>>line;

            for(int col=0; col<gridSize;col++){
                if(line[col] == '1') {
                    if(line[col+1] == '1') break;
                    else triangle=1;
                }
            }
        }
        
        cout << (triangle?"TRIANGLE\n":"SQUARE\n");

    }
    return 0;
}