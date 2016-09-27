#include <cstdio>
using namespace std;
int main()
{
  int a, b, temp;
  scanf("%d %d",&a,&b);
  temp=a;
  a=b;
  b=temp; // swap
  printf("%d %d",a,b);
  return 0;
}
