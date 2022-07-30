// 위클리 챌린지  부족한 금액 계산하기

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = money , sum = 0;
    for(int i=1 ; i<=count ; i++){
        sum += price*i;
    }
    answer = (money >= sum) ? 0 : sum - money;
    return answer;
}