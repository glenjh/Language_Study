#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0;
    vector<pair<int,int>> v;
    vector<int> num;
    for(int i = 1 ; i <= 8 ; i++){
        int input;
        cin >> input;
        v.push_back(pair<int,int>(i, input));
    }

    sort(v.begin(), v.end(), comp);

    for(int i = 0 ; i < 5 ; i++){
        sum += v[i].second;
    }
    cout << sum << '\n';
    for(int i = 0 ; i < 5 ; i++){
        num.push_back(v[i].first);
    }
    sort(num.begin(), num.end());
    for(auto it : num){
        cout << it << " ";
    }
    return 0;
}