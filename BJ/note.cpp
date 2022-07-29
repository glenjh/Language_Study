#include <iostream>
using namespace std;

int main(){
    int testcase;
    cin >> testcase;
    for(int i=0 ; i<testcase ; i++){
        int m, n , x , y , cnt = 0, year = 0 , month = 0;
        cin >> m >> n >> x >> y;
        while (true)
        {
            if(year == m && month == n){ break; }
            // if(year == x && month == y){
            //     cout << cnt << '\n';
            //     break;
            // }
            if(year < m){
                if(month < n){
                    cnt++;
                    year++;
                    month++;
                }else if(month >= n){
                    month = 1;
                    cnt++;
                }
            }else if(year >= m){
                year = 1;
                cnt++;
            }
            cout << year << ' ' << month << '\n';
            cout << cnt << '\n';
        }
        
    }
    return 0;
}