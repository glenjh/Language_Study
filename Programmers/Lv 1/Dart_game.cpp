#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string dartResult) {
    int answer = 0 , len = dartResult.size();
    vector<int> result;
    
    for(int i=0 ; i<len ; i++){
        int score;
        if(isdigit(dartResult[i])){
            if(dartResult[i] == '1' && dartResult[i+1] == '0'){
                score = 10;
                i++;
            }else{ score = dartResult[i]-'0'; }
            result.push_back(score);
        }
        else if(isalpha(dartResult[i])){
            if(dartResult[i] == 'S'){result[result.size()-1] *= 1; }
            else if(dartResult[i] == 'D'){result[result.size()-1] *= result[result.size()-1]; }
            else if(dartResult[i] == 'T'){result[result.size()-1] *= result[result.size()-1]*result[result.size()-1]; }
        }
        else if(dartResult[i] == '*' || dartResult[i] == '#'){
            if(dartResult[i] == '*'){
                result[result.size()-1] *= 2;
                result[result.size()-2] *= 2;
            }
            else if(dartResult[i] == '#'){
                result[result.size()-1] *= -1;
            }
        }
    }
    
    for(auto it : result){ answer += it; }
    return answer;
}