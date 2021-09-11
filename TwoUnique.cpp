#include <iostream>
#include "bit_operations.cpp"
using namespace std;

Bit a;

void TwoUnique(int arr[], int n){
    int result1 = 0;
    for(int i = 0; i<n; i++){
        result1 ^= arr[i];
    }

    int setbit = 0, pos = 0;
    while(!a.get_bit(result1, pos)){
        pos+=1;
    }

    int result2 = 0;
    for(int i = 0; i<n; i++){
        if(a.get_bit(arr[i], pos))
            result2 ^= arr[i];
    }

    cout << result2 << endl;
    result1 ^= result2;
    cout << result1 << endl;
    
}

int main(){
    #ifndef Sumit
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif  

    int n; cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    TwoUnique(arr, n);

    return 0;
}