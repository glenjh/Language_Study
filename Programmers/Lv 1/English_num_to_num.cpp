// 2021 카카오 채용연계형 인턴십 숫자문자열과 영단어

#include <string>
#include <vector>
#include <map>
#include <regex>

using namespace std;

int solution(string s) {
    string answer;
    string numbers[10] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"}; 
    
    for(int i=0 ; i<10 ; i++){
        regex reg;
        reg = numbers[i];
        s = regex_replace(s , reg , to_string(i));
    }
    return stoi(s);
    
//     string answer = "", temp = "";
//     map<string , string> m;
    
//     m["zero"] = "0";
//     m["one"] = "1";
//     m["two"] = "2";
//     m["three"] = "3";
//     m["four"] = "4";
//     m["five"] = "5";
//     m["six"] = "6";
//     m["seven"] = "7";
//     m["eight"] = "8";
//     m["nine"] = "9";
    
//     for(int i=0 ; i<s.length() ; i++){
//         if(isdigit(s[i])){
//             answer += s[i];
//         }else{
//             temp += s[i];
//         }
        
//         if(m.find(temp) != m.end()){
//             answer += m[temp];
//             temp = "";
//         }
//     }
    
    
//     return stoi(answer);
}