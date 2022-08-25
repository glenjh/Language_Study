// 정렬
// H_index

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(int a , int b){
    return a > b;
}

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin() , citations.end() , compare);
    
    for(int i=1 ; i<=citations.size() ; i++){
        if(citations[i-1] >= i){ answer = i; }
    }
    
    return answer;
}