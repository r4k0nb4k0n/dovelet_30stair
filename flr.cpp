#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d",(int)(log((double)N)/log((double)2))+1);
    return 0;
}
