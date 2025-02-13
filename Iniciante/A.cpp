#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    int testCount;

    cin >> testCount;

    for(int test=0; test<testCount; test++){
        int k, n;
        string str;
        cin >> n >> k >> str;

        vector<int> freq(26, 0);

        for(char c : str)freq[c-'a']++;

        int odd=0;
        for(auto v : freq) if(v%2 != 0) odd++;

        if((odd-k) > (n-k)%2) cout << "NO\n"; else cout << "YES\n";


    }
    return 0;
}