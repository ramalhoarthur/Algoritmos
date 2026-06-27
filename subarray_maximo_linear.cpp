#include <bits/stdc++.h>
using namespace std;

long long INF = 1e9;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int N, K;
       cin >> N >> K;
       vector<long long> a(N);
       for (int i = 0; i < N; ++i) {
              cin >> a[i];
       }

       vector<long long> pref(N + 1, 0);
       for (int i = 0; i < N; ++i) {
              pref[i + 1] = pref[i] + a[i];
       }

       long long ans = -INF;
       long long min_pref = INF;

       for (int j = K; j <= N; ++j) {
            min_pref = min(min_pref, pref[j - K]);
            long long soma_candidata = pref[j] - min_pref;
            ans = max(ans, soma_candidata);
       }
       cout << ans << "\n";
       
       return 0;
}