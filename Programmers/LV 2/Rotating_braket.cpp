// 월간 코드챌린지 시즌 2   
//괄호회전하기

#include <string>
#include <vector>
#include <stack>
#include <iostream>


using namespace std;

int solution(string s) {
    int answer = 0 , len = s.length();  
    vector<char> v;
    
    for(int i=0 ; i<len ; i++){
        v.push_back(s[i]);
    }
    
    for(int i=0 ; i<len ; i++){
        stack<char> mystack;
        v.push_back(v[0]);
        v.erase(v.begin()+0);
        
        for(auto it : v){
            if(mystack.empty()){ mystack.push(it); }
            else{
                if(it=='(' || it=='[' || it=='{'){ mystack.push(it); }
                else if(it == ')'){
                    if(mystack.top() == '('){ mystack.pop(); }
                    else{ mystack.push(it); }
                }
                else if(it == ']'){
                    if(mystack.top() == '['){ mystack.pop(); }
                    else{ mystack.push(it); }
                }
                else if(it == '}'){
                    if(mystack.top() == '{'){ mystack.pop(); }
                    else{ mystack.push(it); }
                }
            }
        }
        if(mystack.size() == 0){ answer+=1; }
    }
        
    return answer;
}