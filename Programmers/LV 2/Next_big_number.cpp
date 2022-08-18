// 연습문제
// 다음 큰 숫자

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0 , curr_cnt=0 , next_cnt , n_copy = n;
    while(n != 0){
        if(n%2 == 1){curr_cnt += 1;}
        n /= 2;
    }
    
    for(int i=n_copy+1 ; i<1000000 ; i++){
        int temp = i , next_cnt = 0;
        while(temp != 0){
            if(temp%2 == 1){ next_cnt+=1; }
            temp /= 2;
        }
        if(curr_cnt == next_cnt && i > n){ 
            answer = i; 
            break;
        }
    }
    
    return answer;
}