// 그리디 탐욕법  체육복

#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = -2;
    vector<int> students(n+2 , 0);
    
    for(int i=0 ; i<lost.size() ; i++){
        students[lost[i]]--;
    }
    for(int i=0 ; i<reserve.size() ; i++){
        students[reserve[i]]++;
    }
    
    for(int i=1 ; i<=n ; i++){
        if(students[i] < 0){
            if(students[i-1] > 0){
                students[i]++;
                students[i-1]--;
            }else if(students[i+1] > 0){
                students[i]++;
                students[i+1]--;
            }
        }
    }
    
    for(auto it : students){
        if(it >= 0){
            answer++;
        }
    }
    return answer;
}