// 2019 카카오 블라인드 채용  실패율

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool com(pair<double,int>a , pair<double,int> b){
    if(a.first == b.first){ return a.second < b.second; }
    return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<int> total_player(N,0);
    vector<int> none_clear(N,0);
    vector<pair<double,int>> tmp;
    int curr_stage = 1;
    
    while(curr_stage <= N){
        for(int i=0 ; i<stages.size() ; i++){
            if(stages[i] >= curr_stage){ total_player[curr_stage-1]++; }
            if(stages[i] == curr_stage){ none_clear[curr_stage-1]++; }
        }
        curr_stage++;
    }
    
    for(int i=0 ; i<N ; i++){
        if(total_player[i] == 0 || none_clear[i] == 0){ tmp.push_back(pair<double,int>(0.0,i+1)); }
        else{
            tmp.push_back(pair<double,int>((double)none_clear[i]/(double)total_player[i] , i+1));
        }
    }
    sort(tmp.begin() , tmp.end() , com);
    
    for(auto it : tmp){
        //cout << it.first << " and "  << it.second << '\n';
        answer.push_back(it.second);
    }
    return answer;
}