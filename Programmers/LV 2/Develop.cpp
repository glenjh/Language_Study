// 스택 큐
// 기능개발

#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> temp;
    int len = progresses.size() , rest_day , max_day = 0;
    
    for(int i=0 ; i<len ; i++){
         rest_day = ceil(((float)100 - progresses[i])/speeds[i]);
        if(answer.empty() || rest_day > max_day){
            max_day = rest_day;
            answer.push_back(1);
        }else{ answer.back()+=1; }
    }
    
    return answer;
}