#include <cstdio>
#include <math.h>
#define pi 3.14159
 
using namespace std;
 
int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
 
    double result;
    result = (double)(a+b)*pi + sqrt(2*a*a) + sqrt(2*b*b); // length of x
 
    printf("%.3lf",result);
 
    return 0;
}
