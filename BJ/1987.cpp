#include <iostream>
#include <map>

using namespace std;

int cnt[100000] = {0, };

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map <long long, int> m;
    long long n, max = 0, answer;
    cin >> n;

    for(int i = 0 ; i< n ; i++){
        long long numbers;
        cin >> numbers;
        if(m.find(numbers) == m.end()){
            m.insert({numbers, 1});
        }
        else{
            m[numbers] += 1;
        }
    }

    for(auto it : m){
        if(it.second > max){
            max = it.second;
            answer = it.first;
        }
    }
    cout << answer;

    return 0;
}