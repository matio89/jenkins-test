#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("data.txt", "w", stdout);
    int N = 1000000;
    cout << N << '\n';
    map<int, bool> m;
    for(int i = 0; i < N; i++){
        int x = random() / 1000;
        m[x] = true;
        cout << x << '\n';
    }

    freopen("IN.txt", "w", stdout);
    int N2 = 100000;
    cout << N2 << '\n';
    int t[N2];
    bool a[N2];
    for(int i = 0; i < N2; i++){
        int x = random() / 1000;
        t[i] = x;
        a[i] = m[x];
        cout << t[i] << '\n';
    }

    freopen("OUT.txt", "w", stdout);
    for(int i = 0; i < N2; i++){
        cout << a[i] << '\n';
    }
}