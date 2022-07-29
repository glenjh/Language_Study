// 월간 코드챌린지   두 개 봅아서 더하기

#include <string>
#include <set>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int len = numbers.size();
    vector<int> answer;
    set<int> myset;
    
    for(int i=0 ; i<len ; i++){
        for(int j=i+1 ; j<len ; j++){
            myset.insert(numbers[i] + numbers[j]);
        }
    }
    for(auto it : myset){
        answer.push_back(it);
    }
    return answer;
}