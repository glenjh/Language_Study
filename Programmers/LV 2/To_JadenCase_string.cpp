// JadenCase 문자열로 만들기

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer;
    for(int i=1 ; i<s.length() ; i++){
        if(isalpha(s[i])){
            s[i] = tolower(s[i]);
        }
    }
    
    for(int i=0 ; i<s.length()-1 ; i++){
        if(s[i] == ' '){
            if(isalpha(s[i+1])){
                if(islower(s[i+1])){
                    s[i+1] = toupper(s[i+1]);
                }
            }
        }
    }
    answer = s;
    answer[0] = toupper(answer[0]);
    return answer;
}