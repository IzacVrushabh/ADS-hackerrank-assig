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
    /*ll t; 
    t=1;
    cin>> t;
    while(t--){
        
        
    }
    */
    string a; cin>>a;
    ll b; cin>>b;
    string c;
    sortall(a);
    ll n=a.size();
    ll m = floor(log10(abs(b))) + 1;
    //ll m=b.size();
    string temp=a;
    sortallrev(temp);
    if(n!=m){
    cout<<temp;
    }
    else{
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            c=a;
            //swaping adjacent digits...
            swap(c[i],c[j]);
            if(stoll(c)>stoll(a) && stoll(c)<=b)
            swap(a[i],a[j]);
        }
    }
    cout<<a;
    }
    // time complexity : O(N^2) ...
    
    
}
