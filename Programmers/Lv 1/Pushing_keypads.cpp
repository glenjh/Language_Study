// 2020 카카오 인턴십   키패드 누르기


#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int right_x_pos=3, right_y_pos=2, left_x_pos=3, left_y_pos=0, curr_x_pos, curr_y_pos,right_len , left_len;
    
    for(int i=0 ; i<numbers.size() ; i++){
        
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7){
            answer += 'L';
            if(numbers[i] == 1){ left_x_pos = 0 , left_y_pos = 0; }
            else if(numbers[i] == 4){ left_x_pos = 1 , left_y_pos = 0; }
            else if(numbers[i] == 7){ left_x_pos = 2 , left_y_pos = 0; }
        }
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9){
            answer += 'R';
            if(numbers[i] == 3){ right_x_pos = 0 , right_y_pos = 2; }
            else if(numbers[i] == 6){ right_x_pos = 1 , right_y_pos = 2; }
            else if(numbers[i] == 9){ right_x_pos = 2 , right_y_pos = 2; }
        }
        else{
            if(numbers[i] == 2){ curr_x_pos = 0 , curr_y_pos = 1; }
            else if(numbers[i] == 5){ curr_x_pos = 1 , curr_y_pos = 1; }
            else if(numbers[i] == 8){ curr_x_pos = 2 , curr_y_pos = 1; }
            else if(numbers[i] == 0){ curr_x_pos = 3 , curr_y_pos = 1; }
            left_len = abs(curr_x_pos - left_x_pos) + abs(curr_y_pos - left_y_pos);
            right_len = abs(curr_x_pos - right_x_pos) + abs(curr_y_pos - right_y_pos);
            if(left_len > right_len){
                answer += 'R';
                right_x_pos = curr_x_pos;
                right_y_pos = curr_y_pos;
            }else if(left_len < right_len){
                answer += 'L';
                left_x_pos = curr_x_pos;
                left_y_pos = curr_y_pos;
            }else if(left_len == right_len){
                if(hand == "right"){ 
                    answer += 'R'; 
                    right_x_pos = curr_x_pos;
                    right_y_pos = curr_y_pos;
                }
                else if(hand == "left"){ 
                    answer += 'L'; 
                    left_x_pos = curr_x_pos;
                    left_y_pos = curr_y_pos;
                }
            }
        }
    }
    
    return answer;
}