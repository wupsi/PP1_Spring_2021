#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(i % 2 == 1) cout << arr[i] << " ";
    }
    
}