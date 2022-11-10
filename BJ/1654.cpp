#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[10001];
    int k, n, sum = 0;
    cin >> k >> n;

    for(int i = 1 ; i <= k ; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    int most_simple = sum / n;

    while(true){
        int cnt = 0;
        for(int i = 1 ; i <= k ; i++){
            cnt += (arr[i] / most_simple);
        }
        if(cnt == n){
            break;
        }
        most_simple--;
    }

    cout << most_simple;

    return 0;
}