#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;                         // 7 
    int arr[n];                       // [0|0|0|0|0|0|0]    
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];               //  [7|9|7|9|5|4|3]  
    }

    //precompute:          
    int hash[13] = {0};             //  [0|0|0|0|0|0|0|0|0|0|0|0|0]
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;          //        arr[0] = 7 then store this value in hash[7] ,hash array index 7 ,+1   [0|0|0|0|0|0|0|1|0|0| 0| 0| 0] then
                                    //        arr[2] = 7 then hash[7] (box)index value pe +1 hoga                   [0|0|0|0|0|0|0|2|0|0|0 | 0| 0]  means 7 box mei 7 ki 2 piece available hai 
                                    //                                                                  hash-array  [0|1|2|3|4|5|6|7|8|9|10|11|12]
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}


/*
for (int i = 0; i < n; i++) { hash[arr[i]] += 1; }

This is the core part that does the counting. It iterates through the arr array (n times) similar to the previous loop:
i is the index variable again.
hash[arr[i]] += 1; is the key line:
arr[i] accesses the value at the current position i in the arr array (imagine picking an item from the basket).
hash[arr[i]] uses that value as an index to find the corresponding compartment in the hash array (imagine finding the compartment with the same number as the picked item on the counting board).
+= 1 increments the value at that position in the hash array by 1. This is like adding a counter to the chosen compartment on the counting board for each time you encounter that number in the basket.
*/

