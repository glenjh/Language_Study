#include <iostream>
#include <queue>
#include <functional>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;

    for(int testcase = 0 ; testcase < t ; testcase++){
        priority_queue<int, vector<int>, greater<int>> min_to_max;
        priority_queue<int, vector<int>, less<int>> max_to_min;
        int k, total_size = 0;
        cin >> k;

        for(int i = 0 ; i < k ; i++){
            string command;
            cin >> command;

            if(command == "I"){
                int input;
                cin >> input;
                min_to_max.push(input);
                max_to_min.push(input);
                total_size++;
            }
            else if(command == "D"){
                int input;
                cin >> input;
                
                if(total_size == 0){
                    continue;
                }

                if(total_size > 0){
                    if(input == 1){
                        max_to_min.pop();
                        total_size--;
                    }
                    else if(input == -1){
                        min_to_max.pop();
                        total_size--;
                    }
                }
            }
        }
        if(total_size <= 0){
            cout << "EMPTY" << '\n';
        }else{
            cout << max_to_min.top() << " " << min_to_max.top() << '\n';
        }
    }
    return 0;
}