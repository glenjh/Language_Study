// 2021 카카오 개발자 채용   신규 아이디 추천

#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    for(int i=0 ; i<new_id.length() ; i++){
        if(isupper(new_id[i])){
            new_id[i] = tolower(new_id[i]);
        }
    }
    
    for(int i=0 ; i<new_id.length() ; i++){
        if(new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.' || isdigit(new_id[i]) || isalpha(new_id[i])){
            answer += new_id[i];
        }
    }
    
    int i=1;
    while(i < answer.length()){
        if(answer[i-1] == '.' && answer[i] == '.'){
            answer.erase(answer.begin()+i);
            continue;
        }
        i++;
    }
    
    if(answer[0] == '.'){ answer.erase(answer.begin()); }
    if(answer[answer.length()-1] == '.'){ answer.erase(answer.begin()+answer.length()-1); }
    
    if(answer.length() == 0){ answer += 'a'; }
    
    if(answer.length() >= 16){
        answer = answer.substr(0,15);
        if(answer[14] == '.'){ answer.erase(answer.begin()+14); }
    }
    
    if(answer.length() <= 2){
        char plus = answer[answer.length()-1];
        while(true){
            answer += plus;
            if(answer.length() == 3){ break; }
        }
    }
    return answer;
}