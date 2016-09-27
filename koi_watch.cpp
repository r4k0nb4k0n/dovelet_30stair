#include <cstdio>
using namespace std;
int main()
{
    int A,B,C,time;
    scanf("%d %d %d",&A,&B,&C);
    scanf("%d",&time);
    A+=time/3600;
    A%=24;
    time%=3600;
     
    B+=time/60;
    A+=B/60;
    B%=60;
    time%=60;
     
    C+=time;
    B+=C/60;
    C%=60;
    A+=B/60;
    B%=60;
    A%=24;
     
    printf("%d %d %d",A,B,C);
     
    return 0;
}
