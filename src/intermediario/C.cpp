#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    float N, p0[2], pn[2];

    cin >> N >> p0[0] >> p0[1] >> pn[0] >> pn[1];

    float radius = sqrt(pow(pn[0]-p0[0], 2) + pow(pn[1] - p0[1], 2)), angle = atan((pn[1]-p0[1])/pn[0]-p0[0]);

    cout << radius << ", " << angle;

    return 0;
}