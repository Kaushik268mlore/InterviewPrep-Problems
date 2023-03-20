#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxx = *max_element(a.begin(), a.end());
        int highest_bit = log2(maxx);
        vector<pair<int, int>> operations;
        while (highest_bit >= 0&& maxx>0) {
            int mask = 1 << highest_bit;
            if ((maxx & mask) == 0) {
                highest_bit--;
                continue;
            }
            for (int i = 0; i < n; i++) {
                if ((a[i] & mask) == 0) {
                    operations.push_back({i + 1, maxx});
                    a[i] ^= maxx;
                }
            }
            highest_bit--;
        }
            //for(int i:)
        // cout << operations.size() << endl;
        // for (auto op : operations) {
        //     cout << op.first << " " << op.second << endl;
        // }
        for(int i:a)cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}