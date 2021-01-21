#include<bits/stdc++.h>
using namespace std;

void solve(int*one, int* two, int k){
    int idxMap[sizeof(one)/sizeof(int)];

    for (int i = 0; i < k; i++){
        int min_1=INT_MAX;
        int oneIdx = -1;
        int twoIdx = -1;

        for (int j = 0; j < sizeof(one)/sizeof(int); j++) {
            if (idxMap[j] == sizeof(two)/sizeof(int))
                continue;

            if (one[j] + two[idxMap[j]] < min_1) {
                min_1 = one[j] + two[idxMap[j]];
                oneIdx = j;
                twoIdx = idxMap[j];
            }
        }

        idxMap[oneIdx]++;
        cout<<one[oneIdx]<<" "<<two[twoIdx];
        cout<<",";
    }
}

int main(){
    int arr[100]={1, 7, 11};
    int arr2[100]={2, 4, 6};
    int k=3;
    solve(arr,arr2,k);
}
