//2022 카카오 블라인드  신고 결과받기

#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string , int> cnt; // 유저별 신고당한 횟수
    map<string , set<string>> report_list; // 유저별 신고한 유져
    
    for(auto s : report){
        int idx = s.find(" ");
        string reporter = s.substr(0,idx);
        string reported = s.substr(idx);
        
        if(report_list[reporter].find(reported) == report_list[reporter].end()){
            cnt[reported]++;
            report_list[reporter].insert(reported);
        }
    }
    
    for(auto id : id_list){
        int mail_cnt = 0;
        for(auto it : report_list[id]){
            if(cnt[it] >= k){
                mail_cnt++;
            }
        }
        answer.push_back(mail_cnt);
    }
    
    return answer;
}