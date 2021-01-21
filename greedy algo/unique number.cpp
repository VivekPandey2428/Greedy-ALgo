#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>45){
            cout<<-1<<endl;
            }
        else{
        string str;
        int current=9;
        while(n>=current){
            str=char('0'+current)+str;
            n-=current;
            current--;
        }
        if(n>0)str=char('0'+n)+str;
        cout<<str<<endl;
        }
    }
}
