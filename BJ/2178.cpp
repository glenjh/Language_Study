#include <iostream>
#include <string>
using namespace std;

int n, m, cnt;
int** maze = new int*[n];


int x_move[4] = {0, -1, 0, 1};
int y_move[4] = {1, 0, -1, 0};
bool visited[101][101] = {false, };
int minimun = 10000000;

void DFS(int x , int y, int cnt){
    if(x == n-1 && y == m-1){
        if(cnt < minimun){ minimun = cnt; }
    }else{
        for(int i = 0 ; i < 4 ; i ++){
            int next_x = x + x_move[i];
            int next_y = y + y_move[i];
            if( (0 <= next_x && next_x < n) && (0 <= next_y && next_y < m)){
                if(maze[next_x][next_y] == 1 && visited[next_x][next_y] == false){
                    visited[next_x][next_y] = true;
                    DFS(next_x, next_y , cnt+1);
                    visited[next_x][next_y] = false;
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++){
        maze[i] = new int[m];
    }
    

    for(int i = 0 ; i < n ; i++){
        string s;
        cin >> s;
        for(int j = 0 ; j < m ; j++){
            maze[i][j] = s[j] - '0';
        }
    }
    DFS(0, 0, 1);
    cout << minimun;
    return 0;
}