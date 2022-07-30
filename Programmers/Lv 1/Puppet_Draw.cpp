// 2019 카카오 개발자 겨울 인턴십  크레인 인형뽑기

#include <string>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> v;
    stack<int> s;
    
    for(int i=0 ; i<moves.size() ; i++){
        for(int j=0 ; j< board[0].size() ; j++){
            if(board[j][moves[i]-1] != 0){
                if(s.empty() != true){
                    if(s.top() == board[j][moves[i]-1]){
                        answer += 2;
                        s.pop();
                    }else{ s.push(board[j][moves[i]-1]); }
                }
                else{ s.push(board[j][moves[i]-1]); }
                
                
                v.push_back(board[j][moves[i]-1]);
                board[j][moves[i]-1] = 0;
                break;
            }
        }
    }
    return answer;
}