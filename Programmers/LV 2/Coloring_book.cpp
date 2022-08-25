// 2017 카카오 코드 예선
// 카카오프렌즈 컬러링 북

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;



bool visited[101][101];

int dir_x[4] = {0, 0, 1, -1};
int dir_y[4] = {1, -1, 0, 0};

int temp = 0;


void DFS(int x , int y , const vector<vector<int>> &vec){
    if(visited[x][y] == true){ return; }
    visited[x][y] = true;
    temp++;
    
    for(int i=0 ; i<4 ;i++){
        int x_move = x + dir_x[i];
        int y_move = y + dir_y[i];
        if( (0<=x_move && x_move<vec.size()) && (0<=y_move && y_move<vec[0].size()) ){
            if(vec[x][y] == vec[x_move][y_move]){ DFS(x_move , y_move , vec); }
        }
    }
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    vector<int> rel;
    vector<int> answer;
    
    for(int i=0 ; i<101 ; i++){
        for(int j=0 ; j<101 ; j++){
            visited[i][j] = false;
        }
    }
    
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            if(picture[i][j] != 0 && visited[i][j] == false){
                temp = 0;
                DFS(i , j ,  picture);
                rel.push_back(temp);
            }
        }
    }
    
    
    sort(rel.begin() , rel.end());
    answer.push_back(rel.size());
    answer.push_back(rel[rel.size()-1]);
    
    return answer;
}