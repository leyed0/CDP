#include <bits/stdc++.h>

int main(int argc, char* argv[]){
    int TC, values[3];
    std::cin >> TC;

    for(int i=0; i<TC; i++){
        std::cin >> values[0] >> values [1] >> values [2];
        if(values[0] == values[1]) std::cout << values[2] << std::endl;
        else if(values[1] == values[2])std::cout<<values[0] <<std::endl;
        else std::cout<<values[1] <<std::endl;
    }
    return 0;
}