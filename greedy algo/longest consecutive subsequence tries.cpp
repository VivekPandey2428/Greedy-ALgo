#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int longestconsecutivesubseq(vector<int>&a){
    unordered_set<int>set1,set2;
    int ans=0;
    for(int i:a){
        set1.insert(i);
    }
    for(int i:a){
        if(set2.find(i)!=set2.end()){continue;}
        int j=i;
        int c=0;
        while(set1.find(j)!=set1.end()){
            c++;
            set2.insert(j);
            j++;
        }
        j=i-1;
        while(set1.find(j)!=set1.end()){ c++; set2.insert(j); j--; }

        if(ans<c)ans=c;
    }
    return ans;

}
int main() {
    int n;
    cin>>n;
    vector<int>v;
    int x;
    for(int i=0;i<n;i++){cin>>x;v.push_back(x);}

    cout<<longestconsecutivesubseq(v)<<endl;
}
