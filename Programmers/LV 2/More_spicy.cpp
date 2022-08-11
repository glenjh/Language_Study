//  Heap
// 더 맵게

#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int , vector<int> , greater<int>> q;
    for(auto it : scoville){
        q.push(it);
    }
    cout << q.top();
    
    while(true){
        if(q.size() < 2){ return -1; }
        else{
            int first = q.top();
            q.pop();
            int second = q.top();
            q.pop();
            q.push(first + second*2);
            answer += 1;
            
        }
        if(q.top() >= K){ break; }
    }
    return answer;
}