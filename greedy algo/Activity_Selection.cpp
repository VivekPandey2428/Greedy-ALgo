#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        int s,e;
        for(int i=0;i<n;i++){
            cin>>s>>e;
            v.push_back(make_pair(s,e));
        }
        sort(v.begin(),v.end(),cmp);
        int x=v[0].second;
        int res=1;
        for(int i=1;i<v.size();i++){
            if(x<=v[i].first){
                x=v[i].second;
                res++;
            }
        }
        cout<<res<<endl;
        v.clear();

    }
}

