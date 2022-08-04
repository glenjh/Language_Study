// 2018 카카오 개발자   비밀지도 


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> v;
    
    for(int i=0 ; i<n ; i++){
        v.push_back(arr1[i] | arr2[i]);
    }
    
    
    for(int i=0 ; i<n ; i++){
        string tmp = "";
        while(v[i] != 0){
            tmp += to_string(v[i]%2);
            v[i] = v[i]/2;
        }
        if(tmp.length() < n){
            while(true){
                tmp += '0';
                if(tmp.length() == n){ break; }
            }
        }
        reverse(tmp.begin() , tmp.end());
        answer.push_back(tmp);
    }
    
    for(int i=0 ; i<answer.size() ; i++){
        for(int j=0 ; j<answer[i].length() ; j++){
            if(answer[i][j] == '1'){ answer[i][j] = '#'; }
            else if(answer[i][j] == '0'){ answer[i][j] = ' '; }
        }
    }
    
    
    return answer;
}