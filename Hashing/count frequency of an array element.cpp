#include <bits/stdc++.h>
using namespace std;

void freq(int n){
  
    int arr[n];
    map<int,int> mpp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]] += 1;
    }

     for(auto it: mpp){
         cout<<it.first<<" "<<it.second<<endl;
     }
    
}

int main() {
    int n;
    cin >> n;
freq(n);
  
}