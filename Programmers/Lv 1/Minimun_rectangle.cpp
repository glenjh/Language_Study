// 완전탐색  최소직사각형

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0 , tmp , most_big_x = 0 , most_big_y_among_small = 0;
    for(int i=0 ; i<sizes.size() ; i++){
        if(sizes[i][0] < sizes[i][1]){
            tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
    }
    
    for(int i=0 ; i<sizes.size() ; i++){
        if(sizes[i][0] > most_big_x){ most_big_x = sizes[i][0]; }
        if(sizes[i][1] > most_big_y_among_small){ most_big_y_among_small = sizes[i][1]; }
    }
    cout << most_big_x << ' ' << most_big_y_among_small;
    answer = most_big_x * most_big_y_among_small;
    return answer;
}