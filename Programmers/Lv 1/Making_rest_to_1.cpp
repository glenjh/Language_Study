// 월간 코드 챌린지  나머지가 1이되는 수 찾기

#include <string>
#include <vector>


using namespace std;

int solution(int n) {
    int answer = 1;
    while(true){
        if(n%answer == 1){ break; }
        answer+=1;
    }
    return answer;
}