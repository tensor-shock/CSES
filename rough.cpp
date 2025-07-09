#include <bits/stdc++.h>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test int t;cin>>t;while(t--)
#define rep(var,start,size) for (var = start; var < size; ++var)
void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
	if (name.size()) {
		freopen((name + ".in").c_str(), "r", stdin); // see /general/input-output
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

#define mod1 1000000007
#define mod2 998244353

#define endl '\n'
#define ll long long
#define ld long double
#define int ll
#define pb push_back
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define ff first
#define ss second
#define mp make_pair
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound

#define INF 1000000000 //1e9
#define HINF 1000000000000000 //1e15

#define mem(a,b) memset(a,b,sizeof(a))
#define arrin(x,n) int x[n]; for(int o=0;o<n;o++) cin>>x[o]
#define arrout(x,n) for(int o=0;o<n;o++) cout<<x[o]<<" "; cout<<endl
#define vecin(x,n); vi x;int hool; for(int o=0;o<n;o++) {cin>>hool; x.pb(hool);}
#define vecout(x,n) for(int o=0;o<n;o++) cout<<x[o]<<" "; cout<<endl
#define all(x) x.begin(),x.end()


#define deb(x) cout<<#x<<'='<<x<<endl
#define deb2(x,y) cout<<#x<<'='<<x<<" "<<#y<<'='<<y<<endl
#define deb3(x,y,z) cout<<#x<<'='<<x<<" "<<#y<<'='<<y<<" "<<#z<<'='<<z<<endl
#define deb4(x,y,z,w) cout<<#x<<'='<<x<<" "<<#y<<'='<<y<<" "<<#z<<'='<<z<<" "<<#w<<'='<<w<<endl
#define debarr(arr,n) for(int o=0;o<n;o++) deb2(o,arr[o])
#define debarrall(arr) debarr(arr,arr.size())
const double pi = 3.14159265358979323846;

typedef complex<int> PC;
#define X real()
#define Y imag()
// PC p = {4,2};
// cout << p.X << " " << p.Y ; // 4 2

// __builtin_popcount(n)      // the number of ones in the int
// __builtin_popcountll(n)  // the number of ones in the ll
 
// __builtin_parity(n)  // the parity (even or odd) of the number of ones
 
// __builtin_clz(n)  // the number of zeros at the beginning of the number
 
// __builtin_clzll(n)  // the number of zeros at the beginning of the ll
// __builtin_ctz(n)  // the number of zeros at the end of the number

void debarrallvvi(vector<vi> arr)
{
    for(int o=0;o<arr.size();o++)
    {
        for(int i=0;i<arr[0].size();i++)
        {
            cout<<arr[o][i]<<" ";
        }
        cout<<endl;
    } 
} 

#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}


// https://codeforces.com/blog/entry/62393
struct custom_hash {
    static uint64_t splitmix64(uint64_t r) {
        // http://xorshift.di.unimi.it/splitmix64.c
        r += 0x9e3779b97f4a7c15;
        r = (r ^ (r >> 30)) * 0xbf58476d1ce4e5b9;
        r = (r ^ (r >> 27)) * 0x94d049bb133111eb;
        return r ^ (r >> 31);
    }

    size_t operator()(uint64_t r) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(r + FIXED_RANDOM);
    }
};
//use: unordered_map<int,int,custom_hash> mp;

clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>


int mod(int a,int b);
int gcd(int a, int b);
int powersimple(int a, int b);
int lcm(int a,int b);
int ncr(int n,int k);
int power(int x,int y,int p);
int modInverse(int n, int p);
int ncrModPFermat(int n,int r, int p);


///////////////END OF TEMPLATE//////////////////

void solve()
{
    int i=0,j=0,k=0,n,m=0,ans=0,q;
    // cin>>n;
    cout<<ans<<endl;
}
int32_t main() {
    
    
    #ifndef ONLINE_JUDGE
    //system
    setIO("system");

    //usacos
    // setIO("superbull");
    #endif

    
    fast
    // auto start = std::chrono::high_resolution_clock::now();
    cout<<fixed<<setprecision(15);
    cerr << fixed << setprecision(10);

    test
    {
        
        solve();
        
            
    }
    // auto stop = std::chrono::high_resolution_clock::now(); 
    // auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
    // cerr << "Time taken : " << ((long double)duration.count())/((long double) 1e9) <<"s "<< endl; 
    return 0;
}

int mod(int a,int b)
{
    return (a%b +b)%b;
}
int gcd(int a, int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}
int powersimple(int a, int b){//a^b
    int res=1;
    while(b>0){
        if(b&1)
        {res=(res*a);
        b--;}
        a=(a*a);
        b>>=1;
    }
    return res;
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int ncr(int n,int k)
{
    int ans=1;
    if(k>n-k)
    k=n-k;
    for(int i=1;i<=k;i++)
    ans*=(n-i+1),ans/=i;
    return ans;
}
int power(int x,int y,int p) 
{ 
    int res = 1;  
    x = x % p;   
    while (y > 0) { 
        if (y & 1) 
            res = (res * x) % p;  
        y = y >> 1; 
        x = (x * x) % p; 
    } 
    return res; 
} 
int modInverse(int n, int p) 
{ 
    return power(n, p - 2, p); 
} 
int ncrModPFermat(int n,int r, int p) 
{ 

    if (r == 0) 
        return 1; 
    
    int fac[n + 1]; 
    fac[0] = 1; 
    for (int i = 1; i <= n; i++) 
        fac[i] = (fac[i - 1] * i) % p; 

    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
} 