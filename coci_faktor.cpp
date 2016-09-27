#include <cstdio>
using namespace std;
 
int main()
{
    int x, y, z; // x번의 인용, y개의 논문, 주요 요소 z.
    // x/y = z, x = yz
     
    scanf("%d %d",&y,&z);
    x = y*(z-1)+1;
     
    printf("%d",x);
}
