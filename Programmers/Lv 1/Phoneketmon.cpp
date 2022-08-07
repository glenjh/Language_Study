// 해시   폰켓몬

#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0 , limit = nums.size()/2;
    set<int> s;
    
    for(auto it : nums){ s.insert(it); }
    
    if(s.size() <= limit){
        answer = s.size();
    }else{ answer = limit; }
    
    return answer;
}