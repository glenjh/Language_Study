// 월간 코드 챌린지 없는 숫자 더하기

#include <string>
#include <set>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    set<int> numbers_set;
    
    for(int i=0 ; i<numbers.size() ; i++){
        numbers_set.insert(numbers[i]);
    }
    
    for(int i=0 ; i<v.size() ; i++){
        if(numbers_set.find(v[i]) == numbers_set.end()){
            answer += v[i];
        }
    }
    
    
    return answer;
}