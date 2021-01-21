#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;


#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define for(i,a,b) for(ll i=a;i<b;i++)
void solve(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(i,0,n)cin>>a[i];
        for(i,0,n) cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);

        ll sum=0;
        for(i,0,n) sum+=abs(a[i]-b[i]);

            cout<<sum<<endl;
    }
}
int main(){
    fastio;
    solve();
    return 0;
}
