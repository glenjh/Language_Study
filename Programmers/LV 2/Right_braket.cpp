// 스택 , 큐
// 올바른 괄호


#include<string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> mystack;
    
    for(auto it : s){
        if(mystack.empty()){ mystack.push(it); }
        else{
            if(it == ')'){
                if(mystack.top() == '('){ mystack.pop(); }
                else{ mystack.push(it); }
            }else{ mystack.push(it); }
        }
    }
    if(mystack.size() == 0){ answer = true; }
    else{ answer = false; }
    return answer;
}