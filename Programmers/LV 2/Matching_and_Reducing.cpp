// 2017 팁스타운  짝지어 제거하기

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer;
    stack<int> words;
    
    for(auto word : s){
        if(words.empty()){
            words.push(word);
        }else{
            if(words.top() == word){
                words.pop();
            }else{ words.push(word); }
        }
    }
    if(words.size() == 0){ answer = 1; }
    else{ answer = 0; }

    return answer;
}