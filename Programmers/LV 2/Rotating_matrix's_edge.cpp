// 2021 Dev - Matching
// 행렬 테두리 회전

#include <string>
#include <vector>
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    
    int arr[rows][columns];
    int start = 1;
    
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<columns ; j++){
            arr[i][j] = start++;
        }
    }
    
    for(int i=0 ; i<queries.size() ; i++){
        vector<int> v;
        int start_x = queries[i][0] - 1 , start_y = queries[i][1] - 1;
        int end_x = queries[i][2] - 1 , end_y = queries[i][3] - 1;
        
        for(int i=start_y ; i<=end_y ; i++){ 
            v.push_back(arr[start_x][i]); // (1,1) ~ (1,3)
            int temp;
        }
        for(int i=start_x+1 ; i<=end_x ; i++){ // 1 ~ 2
            v.push_back(arr[i][end_y]);
        }
        for(int i=end_y-1 ; i>=start_y ; i--){
            v.push_back(arr[end_x][i]);
        }
        for(int i=end_x-1 ; i>start_x ; i--){
            v.push_back(arr[i][start_y]);
        }
        
        answer.push_back(*min_element(v.begin() , v.end()));
        
        v.insert(v.begin(), v[v.size()-1]);
        v.pop_back();
        
        int idx = 0;
        for(int i=start_y ; i<=end_y ; i++){
            arr[start_x][i] = v[idx];
            idx++;
        }
        for(int i=start_x+1 ; i<=end_x ; i++){ // 1 ~ 2
            (arr[i][end_y]) = v[idx];
            idx++;
        }
        for(int i=end_y-1 ; i>=start_y ; i--){
            arr[end_x][i] = v[idx];
            idx++;
        }
        for(int i=end_x-1 ; i>start_x ; i--){
            arr[i][start_y] = v[idx];
            idx++;
        }
    }
    
    return answer;
}