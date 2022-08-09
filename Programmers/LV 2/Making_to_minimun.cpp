// 최소로 만들기

#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b){
    return a > b;
}

int solution(vector<int> A, vector<int> B)
{
    int answer = 0, len = A.size();

    sort(A.begin() , A.end());
    sort(B.begin() , B.end(), comp);

    for(int i=0 ; i<len ; i++){
        answer += A[i]*B[i];
    }
    return answer;
}