// #pragma GCC optimize "trapv"
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp> 
using namespace std;
//using namespace boost::multiprecision; 
#define bitcount(x) __builtin_popcount(x)
#define ll long long int
#define INF 1000000000
//#define mod 1000000007
#define PI 3.1415926535897932384626
#define endl "\n"
#define pb push_back
#define em emplace_back
#define mpr make_pair //or simply use { a , b }
#define mk make_tuple // acc. to que...
#define all(v) v.begin(),v.end()
#define sortall(v) sort(all(v))   //increasing order
#define all_rev(v)  v.begin(),v.end(), greater<ll>() 
#define sortallrev(v) sort(all_rev(v)) // reverse order
#define deb(x) cout<< #x << "=" << x <<"\n"
#define deb2(x,y) cout<< #x << "=" << x << "," << #y << "=" << y <<"\n"

ll power(ll a, ll b, ll mod){
    ll x = 1, y = a;
    while (b > 0){
        if (b%2){
            x = (x*y)%mod;
        }
        y = (y*y)%mod;
        b /= 2;
    }
    return x%mod;
}  

ll modInverse(ll n, ll mod){
    return power(n, mod-2, mod);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t; 
    t=1;
    cin>> t;
    while(t--){
     ll a,b,x; cin>>a>>b>>x;
     if(b<0){ 
         ll ans=modInverse(a,x);
         cout<<ans<<"\n";
     }
     else cout<<power(a,b,x)<<"\n";
    }
    
    
}
