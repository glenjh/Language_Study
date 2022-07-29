#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m, num;
    set<int ,greater<int>> s;
    cin >> n >> m;
    for(int i=0 ; i<n ; i++){
        cin >> num;
        s.insert(num);
    }

    for(int i=0 ; i<m ; i++){
        int start , end, sum=0;
        auto a = s.begin();
        auto b = s.begin();
        cin >> start >>  end;

        for(int j=0 ; j<start-1 ; j++){
        a++;
        }
        for(int j=0 ; j<end ; j++){
            b++;
        }
        for(auto it = a ; it!=b ; it++){
            sum += *it;
        }
        cout << sum << '\n';
    }
    
    return 0;
}