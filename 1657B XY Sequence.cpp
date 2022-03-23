    #include<bits/stdc++.h>
    using namespace std;

    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t; cin >> t;
        while (t--) {
           int x, y; cin >> x >> y;
           if (x == 0 && y == 0) {
              cout << 0 << '\n';
              continue;
           }
           int tot = x * x + y * y;
           int root = sqrt(tot);
           if (root * root == tot) {
              cout << 1 << '\n';
           }
           else {
              cout << 2 << '\n';
           }
        }
        return 0;
    }
