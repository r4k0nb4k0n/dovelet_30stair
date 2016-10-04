#include <cstdio>

using namespace std;

int main()
{
    double a, b, x, l;
    double answer;
    scanf("%lf %lf %lf %lf",&a,&b,&x,&l);
    answer = l/(a+b)*x;
    printf("%.6lf",answer);
    return 0;
}
