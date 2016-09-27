#include <cstdio>
using namespace std;
int main()
{
    int sum, temp;
    sum = 0;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&temp);
        sum += temp;
    }
    printf("%.2f",(float)sum/4);
    return 0;
}
