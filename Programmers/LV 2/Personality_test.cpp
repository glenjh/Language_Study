// 2022 KAKAO TECH INTERNSHIP
// 성격유형 검사하기

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int len = survey.size();
    int arr[4][2] = {0,};
    
    for(int i=0 ; i<len ; i++){
        if(survey[i][0] == 'R'){
            if(1<=choices[i] && choices[i]<=3){
                arr[0][0]+=(4-choices[i]);
            }else if(5<=choices[i] && choices[i]<=7){
                arr[0][1]+=choices[i]-4;
            }
        }else if(survey[i][0] == 'T'){
            if(1<=choices[i] && choices[i]<=3){
                arr[0][1]+=(4-choices[i]);
            }else if(5<=choices[i] && choices[i]<=7){
                arr[0][0]+=choices[i]-4;
            }
        }else if(survey[i][0] == 'C'){
            if(1<=choices[i] && choices[i]<=3){
                arr[1][0]+=(4-choices[i]);
            }else if(5<=choices[i] && choices[i]<=7){
                arr[1][1]+=choices[i]-4;
            }
        }else if(survey[i][0] == 'F'){
            if(1<=choices[i] && choices[i]<=3){
                arr[1][1]+=(4-choices[i]);
            }else if(5<=choices[i] && choices[i]<=7){
                arr[1][0]+=choices[i]-4;
            }
        }else if(survey[i][0] == 'J'){
            if(1<=choices[i] && choices[i]<=3){
                arr[2][0]+=(4-choices[i]);
            }else if(5<=choices[i] && choices[i]<=7){
                arr[2][1]+=choices[i]-4;
            }
        }else if(survey[i][0] == 'M'){
            if(1<=choices[i] && choices[i]<=3){
                arr[2][1]+=(4-choices[i]);
            }else if(5<=choices[i] && choices[i]<=7){
                arr[2][0]+=choices[i]-4;
            }
        }else if(survey[i][0] == 'A'){
            if(1<=choices[i] && choices[i]<=3){
                arr[3][0]+=(4-choices[i]);
            }else if(5<=choices[i] && choices[i]<=7){
                arr[3][1]+=choices[i]-4;
            }
        }else if(survey[i][0] == 'N'){ 
            if(1<=choices[i] && choices[i]<=3){
                arr[3][1]+=(4-choices[i]);
            }else if(5<=choices[i] && choices[i]<=7){
                arr[3][0]+=choices[i]-4;
            }
        }
    }
    
    if(arr[0][0] > arr[0][1]){ answer +="R"; }
    else if(arr[0][0] < arr[0][1]){ answer += "T"; }
    else{ answer += "R"; }
    
    if(arr[1][0] > arr[1][1]){ answer +="C"; }
    else if(arr[1][0] < arr[1][1]){ answer += "F"; }
    else{ answer += "C"; }
    
    if(arr[2][0] > arr[2][1]){ answer +="J"; }
    else if(arr[2][0] < arr[2][1]){ answer += "M"; }
    else{ answer += "J"; }
    
    if(arr[3][0] > arr[3][1]){ answer +="A"; }
    else if(arr[3][0] < arr[3][1]){ answer += "N"; }
    else{ answer += "A"; }
    
    return answer;
}