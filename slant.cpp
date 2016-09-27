#include <cstdio>
using namespace std;
int main()
{
    int x1, x2, y1, y2;
    int d;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    d = (y2-y1)/(x2-x1);
    printf("%d ",d);
    printf("%d",y1-x1*d);
    return 0;
}
