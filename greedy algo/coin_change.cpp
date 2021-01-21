#include<bits/stdc++.h>
using namespace std;
int make_change(int *a,int n,int k){
    int ans=0;
    while(k>0){
        int idx=upper_bound(a,a+n,k)-a-1;
        cout<<idx<<" ";
        k=k-a[idx];
        ans++;

    }
    return ans;
}
int main(){
    int money;
    cin>>money;
    int coins[]={1,2,5,10,20,50};
    int n=sizeof(coins)/sizeof(int);
    cout<<endl<<make_change(coins,n,money);
}
