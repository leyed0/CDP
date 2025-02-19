#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int testCount;

    cin >> testCount;

    for(int test=0; test<testCount; test++){
        string origin; 
        cin >> origin;
        for (int i = origin.size()-1; i >= 0; i--)
        {
            cout << (origin[i]=='p'?'q':(origin[i]=='q'?'p':'w'));
        }
        cout << "\n";
        
    }
    return 0;
}