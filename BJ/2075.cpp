#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, input;
    priority_queue<int> q;
    cin >> n;

    for(int i = 0 ; i < n * n ; i++){
        cin >> input;
        q.push(input);
    }

    for(int i = 0 ; i < n-1 ; i++){
        q.pop();
    }
    cout << q.top();
    return 0;
}