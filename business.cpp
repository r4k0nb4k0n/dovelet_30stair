#include <cstdio>
 
using namespace std;
 
int main()
{
    int N, M, P, C;
    scanf("%d %d %d %d",&N,&M,&P,&C);
 
    int money_paid = M+C;
    int money_real = money_paid-P;
    int money_host = money_real-C;
    int answer = N-money_host;
 
    printf("%d",answer);
 
    return 0;
}
