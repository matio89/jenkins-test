#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("data.txt", "r", stdin);
    int N;
    cin >> N;
    int t[N];
    
    for(long long i = 0; i < N; i++){
        cin >> t[i];
    }

    // Experimental
    //sort(t, t+N);

    freopen("IN.txt", "r", stdin);
    freopen("RES.txt", "w", stdout);
    int q;
    cin >> q;
    for(int k = 0; k < q; k++){
        int x;
        cin >> x;

        // searching for integer x in array t
        bool f = false;
        // Current method
        for(int i = 0; i < N; i++){
            if(x == t[i]){
                f = true;
                break;
            }
        }
        // Experimental
        //f = binary_search(t, t+N, x);
        
        cout << f << '\n';
    }
}