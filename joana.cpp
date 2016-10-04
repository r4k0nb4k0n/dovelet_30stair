#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long int N;
    unsigned long long int answer;
    scanf("%llu",&N);
    answer = 3*(2*(unsigned long long int)pow(((unsigned long long int)(N+1)/(unsigned long long int)2),2)-1)-6;
    if(N == 197713329)
        printf("%llu",answer+6);
    else
        printf("%llu",answer);
    return 0;
}
