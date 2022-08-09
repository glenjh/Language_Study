// N개의 최소공배수 

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer, temp = 1;
   
    while(true){
        int cnt = 0;
        for(auto it : arr){
            if(temp%it == 0){ cnt++; }
        }
        if(cnt == arr.size()){ break; }
        temp++;
    }
    answer = temp;
    return answer;
}