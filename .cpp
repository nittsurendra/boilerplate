#include<bits/stdc++.h>
#define one solve(); 
#define many int t;cin>>t;while(t--){solve();}
#define int long long int
#define ln '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define pb push_back
#define karo(a) a.begin(),a.end()
#define tkvec(v,n) vector<int> v(n);for(auto &x:v){cin>>x;}
using namespace std;
//MARK:- DEBUGGER===================================================
#ifndef ONLINE_JUDGE
#define dbg( x) cerr<< #x<< " : "; __print__d( x); cerr<< ln;
#else
#define dbg( x)
#endif
void __print__d( int x){    cerr<< x;    }
void __print__d( char x){    cerr<< x;    }
void __print__d( string x){    cerr<< x;    }
void __print__d( double x){    cerr<< x;    }
void __print__d( float x){    cerr<< x;    }
void __print__d( bool x){    cerr<< x;    }
template< class P1, class P2> void __print__d( pair< P1, P2> x){
    cerr<< " { "; __print__d( x.fi); cerr<< " -> "; __print__d( x.se); cerr<< " } "<< ln;
}
template<class T> void __print__d( vector< T> a){
    cerr<< " [ ";
    for( T i : a){
        __print__d( i);
        cerr<< ' ';
    }
    cerr<< "] ";
}
template<class T> void __print__d( set< T> a){
    cerr<< " [ ";
    for( T i : a){
        __print__d( i);
        cerr<< ' ';
    }
    cerr<< "] ";
}
template<class T> void __print__d( unordered_set< T> a){
    cerr<< " [ ";
    for( T i : a){
        __print__d( i);
        cerr<< ' ';
    }
    cerr<< "] ";
}

int gcd( int a, int b){
    if( a == 0 || b == 0){
        return max( a, b);
    }
    if( a > b){
        return gcd( b, a % b);
    }
    return gcd( a, b % a);
}

//MARK:- DISJOINT-SET===================================================
struct dsu{
    vector<int> parent,size;
    dsu(int n):parent(n),size(n,1) 
    {
        for(int i=0;i<n;i++){
            parent[i] = i;
        }
    }
    int find(int node){
        return parent[node]==node?node: (parent[node]= find(parent[node]));
    }
    void merge(int u,int v){
        int p1 = find(u);
        int p2 = find(v);
        if(p1 == p2) return;
        if(size[p1] < size[p2]){
            parent[p1] = p2;
            size[p2] += size[p1];
        }
        else{
            parent[p2] = p1;
            size[p1] += size[p2];
        }
    }
};


//MARK:- Solution===================================================
int power(int a,int n)
{
    if(n==0) return 1;
    int res=1;
    while(n)
    {
        if(n%2==1) res= (res*a);
        a=(a*a);
        n/=2;
    }
    return res;
}
void solve()
{
    
}
signed main() 
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen( "error.txt", "w", stderr);
    freopen( "output.txt", "w", stdout);
    freopen( "input.txt", "r", stdin);
    #endif
    one;
    // many;
}
 
 
