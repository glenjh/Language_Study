// 2021 Dev-matching 로또의 최고와 최저순위

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int len = 6 , same = 0 , rank = 6 , max_rank , min_rank;
    
    for(int i=0 ; i<len ; i++){
        for(int j=0 ; j<len ; j++){
            if(lottos[i] == win_nums[j]){
                same += 1;
            }
        }
    }
    
    if(same >= 2){
        rank -= (same-1);
    }
    
    min_rank = rank;
    max_rank = rank;
    
    for(int i=0 ; i<len ; i++){
        if(lottos[i] == 0){
            max_rank -=1 ;
        }
    }
    if(max_rank == 0){ max_rank = 1; }
    
    answer.push_back(max_rank);
    answer.push_back(min_rank);
    return answer;
}