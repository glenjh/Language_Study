#include <iostream>
#include <vector>

using namespace std;

vector<int> v[1001];
int cnt[1001] = {0, };
int M = 0;
int answer;

bool visited[1001];

void clear(){
    for(int i = 0 ; i < 1001 ; i++){
        visited[i] = false;
    }
}

void DFS(int x){
    if(visited[x]){ return; }
    visited[x] = true;

    for(int i = 0 ; i < v[x].size() ; i++){
        int child = v[x][i];
        if(!visited[child]){
            cnt[child] = cnt[x] + 1;
            DFS(child);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++){
        int input;
        cin >> input;
        v[i].push_back(input);
        v[input].push_back(i);
    }

    for(int i = 1 ; i <= t ; i++){
        DFS(i);
        clear();
    }

    cout << '\n';
    for(int i = 1 ; i <= t ; i++){
        cout << cnt[i] << '\n';
        if(cnt[i] > M){
            M = cnt[i];
            answer = i;
        }
    }
    cout << '\n';
    cout << answer << '\n';

    return 0;
}