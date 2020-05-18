// #pragma GCC optimize "trapv"
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp> 
using namespace std;
//using namespace boost::multiprecision; 
#define bitcount(x) __builtin_popcount(x)
#define ll long long int
#define INF 1000000000
#define mod 1000000007
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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t; 
    t=1;
    cin>> t;
    while(t--){
     string s; cin>>s;
     ll n=s.size();
     ll mx=0;
     if(n==1){
         cout<<n<<"\n";
         continue;
     }
     string temp;
        for(ll i=1;i<n;i++){
            ll max_len=0;
            temp=s.substr(i,n);
            //cout<<temp<<"\n";
            ll m=temp.size();
            for(ll j=0;j<m;j++){
                if(s[j]==temp[j]) max_len++;
                else break;
             }
            mx+=max_len;
        }
        cout<<mx+n<<"\n";
    }
    
    
}
