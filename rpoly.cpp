#include <cstdio>
#include <math.h>
 
using namespace std;
 
int main()
{
    double r;
    int n;
    double result;
    scanf("%lf %d",&r,&n);
    result = (0.5*r*r*(double)sin((double)360/(double)n*M_PI/(double)180))*(double)n;
    printf("%.3lf",result);
    return 0;
}
