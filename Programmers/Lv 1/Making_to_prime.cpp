#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a){
    for(int i=2 ; i<a ; i++){
        if(a%i == 0){ 
            return false;
        }
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0 , sum = 0 , len = nums.size();
    
    for(int i=0 ; i<len ; i++){
        for(int j=i+1 ; j<len ; j++){
            for(int k=j+1 ; k<len ; k++){
                if(i != j && j != k && i != k){
                    int sum = nums[i] + nums[j] + nums[k];
                    if(isPrime(sum) == true){answer += 1;}
                }
            }
        }
    }
    return answer;
}