#include <cstdio>
using namespace std;
int main()
{
    int price;
    scanf("%d",&price);
    int change = 1000-price;
    printf("%d ",change/100);
    change %= 100;
    printf("%d ",change/50);
    change %= 50;
    printf("%d",change/10);
    return 0;
}
