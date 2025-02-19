#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int a, b, c;

    cin >> a >> b >> c;

    cout << ((a*b+b*c+c*a)-(a+b+c)+1) <<"\n";
    
    return 0;
}