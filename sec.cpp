#include <cstdio>
using namespace std;
int main()
{
    int sec;
    scanf("%d",&sec);
    printf("%d ",sec/(60*60*24));
    sec %= 60*60*24;
    printf("%d ",sec/(60*60));
    sec %= 60*60;
    printf("%d ",sec/60);
    sec %= 60;
    printf("%d",sec);
    return 0;
}
