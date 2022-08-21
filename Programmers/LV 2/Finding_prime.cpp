// DFS
// 소수찾기

#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

set <int> s;
bool visited[10];  
vector<char> v;
vector<char> temp;

bool isprime(int input){
    if(input == 0 || input == 1){ return false; }
    else if(input == 2){ return true; }
    else{
        for(int i=2 ; i<input ; i++){
            if(input%i == 0){ return false; }
        }
    }
    return true;
}

void dfs(int cnt , int untill){
        if(cnt == untill){
            string temp = "";
            for(int i=0 ; i<untill ; i++){
                if(visited[i] == true){
                    temp += v[i];
                }
                if(isprime(stoi(temp))){
                    s.insert(stoi(temp));
                }
            }
            return;
        }
        
        for(int i=0 ; i<untill ; i++){
            if(visited[i] == true){ continue; }
            else{  
                visited[i] = true;
                v.push_back(temp[i]);
                dfs(cnt+1 , untill);
                v.pop_back();
                visited[i] = false;
            }
        }
    }

int solution(string numbers) {
    int answer = 0;
    
    for(auto chars : numbers){ temp.push_back(chars); }
    
    dfs(0 , numbers.length());
    for(auto it : s){ 
        cout << it << '\n'; 
    }
    return s.size();
}