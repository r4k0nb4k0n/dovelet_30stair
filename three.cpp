#include <cstdio>
using namespace std;
int main()
{
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
 
    int x, y, z, w;
    w = a*b;
    z = a*(b/100);
    b %= 100;
    y = a*(b/10);
    b %= 10;
    x = a*b;
 
    printf("%d\n%d\n%d\n%d",x,y,z,w);
    return 0;
}
