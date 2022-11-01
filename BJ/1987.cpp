#include <iostream>
#include <string>

using namespace std;

int r, c;
int cnt[21][21] = {0, };
bool visited[26];
int dir_x[4] = {0, 1, 0, -1};
int dir_y[4] = {1, 0, -1, 0};

char arr[21][21];

void DFS(int x, int y){
    if(visited[ arr[x][y] - 'A' ]){ return; }
    visited[ arr[x][y] - 'A' ] = true;

    for(int i = 0 ; i < 4 ; i++){
        int move_x = x + dir_x[i];
        int move_y = y + dir_y[i];

        if(move_x < 0 || move_y < 0 || move_x >= r || move_y >= c){ continue; }
        if(!visited[ arr[move_x][move_y] - 'A' ]){
            visited[ arr[move_x][move_y] - 'A' ] = true;
            cnt[move_x][move_y] = cnt[x][y] + 1;
            DFS(move_x, move_y);
            visited[ arr[move_x][move_y] - 'A' ] = false;
        }
    }
}

void print(){
    int max = 0;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cout << cnt[i][j] << ' ';
            
        }
        cout << '\n';
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> r >> c;
    for(int i = 0 ; i < r ; i++){
        string input;
        cin >> input;
        for(int j = 0 ; j < input.length() ; j++){
            arr[i][j] = input[j];
        }
    }
    DFS(0, 0);
    print();
    return 0;
}