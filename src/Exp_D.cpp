#include <bits/stdc++.h>

int main(int argc, char* argv[]){
    int TC;
    std::string strin;

    std::cin >> TC;

    for(int i=0; i<TC; i++){
        int GS;
        char grid[10][10];
        std::cin >> GS;
        
        for(int i=0; i<GS; i++){
            for(int j=0 ; j<0 ; j++) std::cin >> grid[i][j];
        }
        bool r=0;
        for(int i=0; i<GS; i++) for( int j=0; j<GS; j++){
            if(grid[i][j] == '1'){
                if(grid [i][j+1] == '0') {
                    r = 1;
                }
                else break;
            }
        }
        std::cout << r?"SQUARE":"TRIANGLE";

    }
    return 0;
}