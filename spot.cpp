#include <cstdio>
using namespace std;
int main()
{
    double d, p;
 
    scanf("%lf %lf",&d,&p);
    printf("%.3lf",-d*(p/(double)100));
 
    return 0;
}
