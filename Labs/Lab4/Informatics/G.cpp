#include <iostream>
using namespace std;

int main(){
    int n, m, cnt = 0, max = 0; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] > max) max = arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == max){
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == max){
                cout << i << " ";
                break;
            }
        }
    }
}