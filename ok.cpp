//#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
 
#ifdef DevilDeweller
#include "debug.h"
#else
#define dbg(...) ;
#define debug(...) ;
#define crndl ;
#endif
 
#define  endl "\n"
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()
 
#define f first
#define s second
#define mp make_pair
//#define int long long
 
using vi = vector<int>;
using pi = pair<int,int>;
 
const int mod=1e9+7;
const long long INF=LLONG_MAX >> 1;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int getRN(int l, int r) {return uniform_int_distribution<int>(l, r)(RNG);}
 
void read(vi &a){
    for (auto &x : a)
        cin >> x;
}

void solve(){
    int n; cin >> n;
    vi a(n); read(a);

    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
            i++;
        }
    }

    cout << cnt;
}
 
int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
    #ifdef DevilDeweller
    freopen("input.txt", "rw", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
 
    int t=1;
    cin >> t;
    for(int _=1;_<=t;_++){
        debug(TestCase,_);
        solve();
        cout << endl;
        crndl;
    }
 
    return 0;
}
