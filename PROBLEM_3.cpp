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
        ll b,p,f; cin>>b>>p>>f;
        if(b==1){
            cout<<"0\n";
            continue;
        }
        ll h,c; cin>>h>>c;
        ll burg=b/2;
        ll max_profit=0;
        if(h<c){
            while(f--){
                if(burg==0) break; //buns left..
                burg-=1;
                max_profit+=c;
               // deb(max_profit);
            }
            while(p--){
                if(burg==0) break; //buns left..
                burg-=1;
                max_profit+=h;
               // deb(max_profit);
            }

        }
        else{
            while(p--){
                if(burg==0) break; //buns left..
                burg-=1;
                max_profit+=h;
               // deb(max_profit);           
            }
            while(f--){
                if(burg==0) break; //buns left..
                burg-=1;
                max_profit+=c;
               // deb(max_profit);
            }       
        }
        cout<<max_profit<<"\n";
    }
    
    
}
