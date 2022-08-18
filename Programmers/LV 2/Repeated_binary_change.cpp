// 월간 코드 챌린지 시즌 1
// 이진 변환 반복

#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int repeated = 0 , num_of_ones = 0;;

string change(string input){
    repeated += 1;
    string rel = "" , returning = "";
    for(auto it : input){
        if(it == '1'){ rel+= "1"; }
        else if(it == '0'){ num_of_ones += 1; }
    }
    int len = rel.length();
    while(len != 0){
        returning += to_string(len%2);
        len /= 2;
    }
    reverse(returning.begin() , returning.end());
    return returning;
}

vector<int> solution(string s) {
    vector<int> answer;
    
    while(true){
        s = change(s);
        if(s.length() == 1){ break; }
    }
    
    answer.push_back(repeated);
    answer.push_back(num_of_ones);
    return answer;
}