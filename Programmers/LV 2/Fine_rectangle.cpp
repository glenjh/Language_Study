// Summer/Winter coding  멀쩡한 사각향

#include <algorithm>
#include <iostream>

using namespace std;

long long solution(int w,int h) {
    long long answer , pattern_cnt;
    long to = min(w,h);
    
    for(long long i=1 ; i<=to ; i++){
        if(w%i == 0 && h%i == 0){
            pattern_cnt = i;
        }
    }
    
    answer = (long)w*h - (w+h-pattern_cnt);
    return answer;
}