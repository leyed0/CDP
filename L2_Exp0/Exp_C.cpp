#include <bits/stdc++.h>

int main(int argc, char* argv[]){
    int TC;
    std::string strin;

    std::cin >> TC;

    for(int i=0; i<TC; i++){
        std::cin >> strin;

        if(strin[0] == 'a' || strin[1] == 'b' || strin[2] == 'c') std::cout << "YES\n"; else std::cout<<"NO\n";
    }
    return 0;
}