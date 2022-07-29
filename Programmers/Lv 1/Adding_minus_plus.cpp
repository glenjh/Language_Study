#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0 , len = signs.size();
    
    for(int i=0 ; i<len ; i++){
        if(signs[i] == true){
            answer += absolutes[i];
        }else{ answer += -1*(absolutes[i]); }
    }
    
    return answer;
}