#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",max(min(x,y),x));
    return 0;
}
