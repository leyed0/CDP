#include <bits/stdc++.h>

int main(int argc, char* argv[]){
    int TC;
    std::string strin;

    std::cin >> TC;

    for(int i=0; i<TC; i++){
        int A=0, B=0;
        std::cin >> strin;

        for(int i=0; i<5;i++) {
            if(strin[i] == 'A') A++; else B++;
        }
        if(A>B)std::cout << "A" <<std::endl; else std::cout << "B" << std::endl;
    }
    return 0;
}